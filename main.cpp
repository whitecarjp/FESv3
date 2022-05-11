#include<cstdio>
#include <stdio.h>
#include<iostream>
#include "sample.h"
#include <math.h>
#define M_PI 3.1416

HDWF hdwf;
// global variables

//digital potentiometer settings
int dioCS = 0;
int dioSCK = 1;
int dioSDIO = 2;
int flex = 3;
// ---for AD
char szError[512] = { 0 };
char szDeviceName[32];
double SUPPLY_VOLTAGE = 5;

bool isADConnected()
{

	// close if something else opened AD previously
	FDwfDeviceCloseAll();

	if (!FDwfDeviceOpen(-1, &hdwf)) {
		FDwfGetLastErrorMsg(szError);

		printf("Device open failed:\n%s", szError);
		printf("\n");
		printf("Press any key to exit.");

		getchar();
		return 0;
	}
	else {
		return 1;
	}
}

void modulate(double vAmp) {
	double rgdSamples[1024];
	int idxChannel = 0;
	char szError[512] = { 0 };

	printf("\nGenerating...\n");

	// needed for EExplorer, don't care for ADiscovery
	FDwfAnalogOutCustomAMFMEnableSet(hdwf, idxChannel, true);
	// enable first channel
	FDwfAnalogOutNodeEnableSet(hdwf, idxChannel, AnalogOutNodeCarrier, true);
	// set sine carrier
	FDwfAnalogOutNodeFunctionSet(hdwf, idxChannel, AnalogOutNodeCarrier, funcSine);
	// 1V amplitude, 2V pk2pk
	FDwfAnalogOutNodeAmplitudeSet(hdwf, idxChannel, AnalogOutNodeCarrier, vAmp);
	// 10kHz carrier frequency
	FDwfAnalogOutNodeFrequencySet(hdwf, idxChannel, AnalogOutNodeCarrier, 1000.0);
	// enable amplitude modulation
	FDwfAnalogOutNodeEnableSet(hdwf, idxChannel, AnalogOutNodeAM, true);
	// set custom AM
	FDwfAnalogOutNodeFunctionSet(hdwf, idxChannel, AnalogOutNodeAM, funcSquare);
	// +-100% modulation index, will result with 1V amplitude carrier, 0V to 2V
	FDwfAnalogOutNodeAmplitudeSet(hdwf, idxChannel, AnalogOutNodeAM, 100);
	// 10Hz AM frequency
	FDwfAnalogOutNodeFrequencySet(hdwf, idxChannel, AnalogOutNodeAM, 10.0);
	// set custom waveform samples
	// normalized to ±1 values 
	FDwfAnalogOutNodeDataSet(hdwf, idxChannel, AnalogOutNodeAM, rgdSamples, 1024);
	// by default the offset is 0V
	// start signal generation
	FDwfAnalogOutConfigure(hdwf, idxChannel, true);
}

void initAD() {
	////initialize AD2
	//FDwfDigitalOutInternalClockInfo(hdwf, &hzSys);
	//enable positive supply
	FDwfAnalogIOChannelNodeSet(hdwf, 0, 0, 1);
	//master enable
	FDwfAnalogIOEnableSet(hdwf, true);
	//enable and set supply channel to 5V
	printf("Supplying 5V \n");
	FDwfAnalogIOChannelNodeSet(hdwf, 0, 0, 1);
	FDwfAnalogIOChannelNodeSet(hdwf, 0, 1, SUPPLY_VOLTAGE);
	//FDwfAnalogIOEnableSet(hdwf, true);
	//FDwfAnalogOutCustomAMFMEnableSet(hdwf, analogChannel, true);
	//FDwfAnalogOutNodeEnableSet(hdwf, analogChannel, AnalogOutNodeCarrier, true);
	//FDwfAnalogOutNodeFunctionSet(hdwf, analogChannel, AnalogOutNodeCarrier, funcSquare);
	//FDwfAnalogOutNodeAmplitudeSet(hdwf, analogChannel, AnalogOutNodeCarrier, aCarrierAmp);
	//FDwfAnalogOutNodeFrequencySet(hdwf, analogChannel, AnalogOutNodeCarrier, aCarrierFreq);
	//FDwfAnalogOutNodeEnableSet(hdwf, analogChannel, AnalogOutNodeAM, true);
	//FDwfAnalogOutNodeFunctionSet(hdwf, analogChannel, AnalogOutNodeAM, funcPulse);
	//FDwfAnalogOutNodeAmplitudeSet(hdwf, analogChannel, AnalogOutNodeAM, aAMAmp);
	//FDwfAnalogOutNodeFrequencySet(hdwf, analogChannel, AnalogOutNodeAM, aAMFreq);
	//FDwfAnalogOutNodeOffsetSet(hdwf, analogChannel, AnalogOutNodeAM, aAMOffset);
	//FDwfAnalogOutConfigure(hdwf, analogChannel, true);


	//enable both analog channels
	//FDwfAnalogInChannelEnableSet(hdwf, 0, true);
	//FDwfAnalogInChannelEnableSet(hdwf, 1, true);

	//set 0V offset
	//FDwfAnalogInChannelOffsetSet(hdwf, -1, 0);

	//ad2_enableMasterSwitches(false);
	//printf("Press any key to stop...");

}

void read_Flexsensor(double Flex_snr) {
	int idxChannel = 0;

	FDwfAnalogInStatus(hdwf, false, NULL);
	FDwfAnalogInStatusSample(hdwf, idxChannel, &Flex_snr);
}

void digipot_SPIdriver(unsigned short value) {

	//configure SPI on AD2

	FDwfDigitalSpiReset(hdwf);
	FDwfDigitalSpiFrequencySet(hdwf, 9600);
	FDwfDigitalSpiClockSet(hdwf, dioSCK);
	FDwfDigitalSpiDataSet(hdwf, 0, dioSDIO);
	FDwfDigitalSpiModeSet(hdwf, 0);
	FDwfDigitalSpiOrderSet(hdwf, 1);
	FDwfDigitalSpiSelect(hdwf, dioCS, 0);

	FDwfDigitalSpiSelect(hdwf, dioCS, 0);
	FDwfDigitalSpiWrite16(hdwf, 0, 16, &value, 1);
	FDwfDigitalSpiSelect(hdwf, dioCS, 1);

}

int main(int carg, char **szarg) {
	int prevDuty = 0;
	int i;
	double vAmp;
	//unsigned short value[1];
	//window title
	system("Functional Electrical Stimulation v3");


	if (!isADConnected())
		exit(0);
	else {
		initAD();
		printf("Amplitude: ");
		scanf_s("%lf", &vAmp);
		modulate(vAmp);
		digipot_SPIdriver(0);

		int x = 0;
		int y = 0;

		while (1) {

			for (i = 0; i < 255; i++) {
				digipot_SPIdriver(i);
				printf("%d\n", i);
				Wait(0.001);
			}
			for (i = 255; i > 0; i--) {
				y = abs((x++ % 256) - 256);

				digipot_SPIdriver(i);
				printf("%d\n", i);
				Wait(0.001);
			}
			
			   //y = abs(y-256);
		}
		//for (i = 0; i < 10000; i++) {
		//	//j--;
		//	//value[0] = (unsigned short) (128*sin(2*M_PI*i/100.0) + 128);
		//	digipot_SPIdriver(i % 256);
		//	printf("%d\n", i % 256);
		//
		//

		//	Wait(0.0001);

		//}

		/*int level = 0;
		int i = 0;
		int flag = 0;
		while (true) {
			level = abs((i++ ))
		}*/
		
		getchar();
		// on close device is stopped and configuration lost
		FDwfDeviceCloseAll();

	}
	return 0;
}