#include<cstdio>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<iostream>
#include"sample.h"
#include<math.h>
#include"MCP23S17.h"
#include <conio.h>

#define M_PI 3.1416
#define MAX_CHIPS 8			//max number of chips per CS line

#define E0 0x08
#define E1 0x04
#define E2 0x02
#define E3 0x01

#define E4 0x80
#define E5 0x40
#define E6 0x20
#define E7 0x10

#define A 0x01
#define B 0x02
#define C 0x00

#define OFF_ALL 0x00
#define ON_ALL 0xFF






typedef struct mcp_regs {
	unsigned char LATA;
	unsigned char LATB;
}MCP_REGS;



using namespace std;
HDWF hdwf;
STS sts;
// global variables

//GPIO expander settings
int swCS = 3;
int swSCK = 4;
int swSI = 5;
int swSO = 6;

//digital potentiometer settings
int stimCS = 0;
int stimSCK = 1;
int stimSDIO = 2;
int potPin = 0;

// ---for AD00.....
char szError[512] = { 0 };
char szDeviceName[32];
double pkVoltage;
double SUPPLY_VOLTAGE = 5;

//flex sensor
int flexPin = 1;
const float R_DIV = 20000.0;
const float STRAIGHT_RESISTANCE = 12000.0;
const float BEND_RESISTANCE = 30000.0;

//stuff
	
bool isADConnected()
{

	// close if something else opened AD previously
	//FDwfDeviceCloseAll();

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

void wavegen() {
	double rgdSamples[1024];
	int idxChannel = 0;

	// needed for EExplorer, don't care for ADiscovery
	FDwfAnalogOutCustomAMFMEnableSet(hdwf, idxChannel, true);
	// enable first channel
	FDwfAnalogOutNodeEnableSet(hdwf, idxChannel, AnalogOutNodeCarrier, true);
	// enable second channel
	FDwfAnalogOutNodeEnableSet(hdwf, 1, AnalogOutNodeCarrier, true);
	// set square carrier
	FDwfAnalogOutNodeFunctionSet(hdwf, idxChannel, AnalogOutNodeCarrier, funcSquare);
	FDwfAnalogOutNodeFunctionSet(hdwf, 1, AnalogOutNodeCarrier, funcSquare);
	// 1V amplitude, 2V pk2pk
	FDwfAnalogOutNodeAmplitudeSet(hdwf, idxChannel, AnalogOutNodeCarrier, 2.5);
	FDwfAnalogOutNodeOffsetSet(hdwf, idxChannel, AnalogOutNodeCarrier, 2.5);

	//FDwfAnalogOutNodeAmplitudeSet(hdwf, 1, AnalogOutNodeCarrier, 2.5);
	FDwfAnalogOutNodeOffsetSet(hdwf, 1, AnalogOutNodeCarrier, 2.5);

	// 1Hz carrier frequency
	FDwfAnalogOutNodeFrequencySet(hdwf, idxChannel, AnalogOutNodeCarrier, 1.0);
	// 2Hz carrier frequency
	FDwfAnalogOutNodeFrequencySet(hdwf, 1, AnalogOutNodeCarrier, 2.0);
	// normalized to ±1 values 
	FDwfAnalogOutNodeDataSet(hdwf, idxChannel, AnalogOutNodeAM, rgdSamples, 1024);
	FDwfAnalogOutNodeDataSet(hdwf, 1, AnalogOutNodeAM, rgdSamples, 1024);
	// by default the offset is 0V
	// start signal generation
	FDwfAnalogOutConfigure(hdwf, idxChannel, true);
	FDwfAnalogOutConfigure(hdwf, 1, true);
}

void modulate(double vAmp	 ) {
	double rgdSamples[1024];
	int idxChannel = 0;
	char szError[512] = { 0 };


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
	// 50Hz AM frequency
	FDwfAnalogOutNodeFrequencySet(hdwf, idxChannel, AnalogOutNodeAM, 50.0);
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
	Wait(1);
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

	

	//configure MCP23S17 SPI on AD2

	FDwfDigitalSpiReset(hdwf);
	FDwfDigitalSpiFrequencySet(hdwf, 10000);
	FDwfDigitalSpiClockSet(hdwf, swSCK);
	FDwfDigitalSpiDataSet(hdwf, 0, swSI);
	FDwfDigitalSpiDataSet(hdwf, 1, swSO);
	FDwfDigitalSpiModeSet(hdwf, 0);
	FDwfDigitalSpiOrderSet(hdwf, 1);
	FDwfDigitalSpiSelect(hdwf, swCS, 0);

	//enable both analog channels
	//FDwfAnalogInChannelEnableSet(hdwf, 0, true);
	//FDwfAnalogInChannelEnableSet(hdwf, 1, true);

	//set 0V offset
	//FDwfAnalogInChannelOffsetSet(hdwf, -1, 0);

	//ad2_enableMasterSwitches(false);
	//printf("Press any key to stop...");

} 

long map(long x, long in_min, long in_max, long out_min, long out_max) {
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void ad2_enableMstrSw(bool state) {

	// enable channel
	FDwfAnalogInChannelEnableSet(hdwf, flexPin, state);
	
	// 20Mhz sample rate
	FDwfAnalogInFrequencySet(hdwf, 20000000.0);
	
	// configure trigger
	FDwfAnalogInTriggerSourceSet(hdwf, trigsrcDetectorAnalogIn);
	FDwfAnalogInTriggerAutoTimeoutSet(hdwf, 10.0);
	FDwfAnalogInTriggerChannelSet(hdwf, 0);
	FDwfAnalogInTriggerTypeSet(hdwf, trigtypeEdge);
	FDwfAnalogInTriggerLevelSet(hdwf, 1.0);
	FDwfAnalogInTriggerConditionSet(hdwf, trigcondRisingPositive);

	// start or stop acquisition
	FDwfAnalogInConfigure(hdwf, 0, state);

	// master switch for 5V supply
	FDwfAnalogIOEnableSet(hdwf, state);

	// master switch for digital outputs
	FDwfDigitalOutConfigure(hdwf, state);

	//// switch for waveform generator output
	//FDwfAnalogOutConfigure(hdwf, 0, state);
}

double read_Flexsensor(int channel) {

	ad2_enableMstrSw(true);

	double Flex_snr;
	FDwfAnalogInStatus(hdwf, false, NULL);
	FDwfAnalogInStatusSample(hdwf, channel, &Flex_snr);
	//std::cout << Flex_snr << endl;

	return Flex_snr;
}

void gatherFlexdata() {
	double value;

	value = read_Flexsensor(flexPin);

	float flexR = R_DIV * (SUPPLY_VOLTAGE / value - 1.0);
	printf("Resistance: %f\n", flexR);

	float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE, 0, 90.0);

	cout << "Bend:" << angle << "degrees" << endl;

	Wait(1);
}

void switching(unsigned short address, unsigned short Svalue) {
	FDwfDigitalSpiSelect(hdwf, swCS, 0);
	FDwfDigitalSpiWrite16(hdwf, 0, 8, &Svalue, 1);
	FDwfDigitalSpiSelect(hdwf, GPIOB, 1);

	FDwfDigitalSpiSelect(hdwf, swCS, 1);
}



void SPIdriver() {
	//configure MCP4164 SPI on AD2

	FDwfDigitalSpiReset(hdwf);
	FDwfDigitalSpiFrequencySet(hdwf, 9600);
	FDwfDigitalSpiClockSet(hdwf, stimSCK);
	FDwfDigitalSpiDataSet(hdwf, 0, stimSDIO);
	FDwfDigitalSpiModeSet(hdwf, 0);
	FDwfDigitalSpiOrderSet(hdwf, 1);


}

void potSend(unsigned short value)
{

	FDwfDigitalSpiClockSet(hdwf, stimSCK);
	FDwfDigitalSpiDataSet(hdwf, 0, stimSDIO);


	FDwfDigitalSpiSelect(hdwf, stimCS, 0);
	FDwfDigitalSpiWrite16(hdwf, 0, 16, &value, 1);
	FDwfDigitalSpiSelect(hdwf, stimCS, 1);

}



void swSend(unsigned short chipAddress, unsigned short address, unsigned short value)
{
	unsigned char wBuff[] = { 0x40, 0x00, 0x00 };
	wBuff[0] = wBuff[0] | (unsigned char)(chipAddress << 1);
	wBuff[1] = (unsigned char)address;
	wBuff[2] = (unsigned char)value;


	FDwfDigitalSpiDataSet(hdwf, 0, swSI);
	FDwfDigitalSpiDataSet(hdwf, 1, swSO);


	FDwfDigitalSpiSelect(hdwf, swCS, 0);
	FDwfDigitalSpiWrite(hdwf, 0, 8, wBuff, 3);
	FDwfDigitalSpiSelect(hdwf, swCS, 1);

}

unsigned char swReceive(unsigned short address)
{
	unsigned char wBuff[] = { 0x41, 0x00, 0x00 };

	wBuff[1] = (unsigned char)address;

	FDwfDigitalSpiSelect(hdwf, swCS, 0);
	FDwfDigitalSpiWrite(hdwf, 0, 8, wBuff, 2);
	FDwfDigitalSpiRead(hdwf, 1, 8, wBuff+2, 1);

	FDwfDigitalSpiSelect(hdwf, swCS, 1);

	return wBuff[2];
}

MCP_REGS G_MCP[8];

void initG_MCP()
{
	int i;

	for (i = 0; i < 8; i++) {

		G_MCP[i].LATA = 0xFF;
		G_MCP[i].LATB = 0xFF;
	}
}

//#define E_ON(a, x) swSend(a, OLATA, G(G_MCP[a].OLATA & ~(x)))
void E_ON(int a, unsigned char x)
{
	G_MCP[a].LATA &= ~x;
	swSend(a, OLATA, G_MCP[a].LATA);
}

//#define E_OFF(a, x) swSend(a, OLATA,(G_MCP[a].OLATA | x))
void E_OFF(int a, unsigned char x)
{
	G_MCP[a].LATA |= x;
	swSend(a, OLATA, G_MCP[a].LATA);
}

//#define E_SEL(a, x) swSend(a, OLATB, x)
void E_SEL(int a, unsigned char AVal, unsigned char BVal)
{
	G_MCP[a].LATB |= AVal;
	G_MCP[a].LATB &= (~BVal);
	swSend(a, OLATB, G_MCP[a].LATB);
}




void ad2Exit(void)
{
	
	printf("Exiting... press Enter to continue.");
	getchar();
	FDwfDeviceClose(hdwf);
}

void waitUntil()
{
	while (!_kbhit());
	_getch();
}

int main(int carg, char **szarg) {
	//Wait(5);
	int prevDuty = 0;
	int i, x, y;
	int toggle=1;
	double vAmp;
	unsigned short value;
	//unsigned short circ;
	//unsigned short value;
	//unsigned short value[1];
	//window title

	if (!isADConnected())
		exit(0);
	else {
		std::cout << "Initializing Analog Discovery\n";
		initAD();
		//Wait(1);
		//std::cout << "generating 1hz and 2hz square wave\n";
		//wavegen(); //testing 1hz and 2 hz frequency on switching


		
		
		Sleep(1000);
		
		

		Sleep(1);

		// 0X01 MCP23S17 config
		swSend(A, IOCON, 0x28);

		swSend(A, OLATA, 0xFF);
		swSend(A, OLATB, 0xFF);

		swSend(A, IODIRA, 0);
		swSend(A, IODIRB, 0);

		// 0X02 MCP23S17 config
		swSend(B, IOCON, 0x28);// Byte mode setting

		swSend(B, OLATA, 0xFF);// Turn off all relays
		swSend(B, OLATB, 0xFF);// Turn off all relays

		swSend(B, IODIRA, 0); // Set GPA to output
		swSend(B, IODIRB, 0); // Set GPB to output

		// 0X00 MCP23S17 config
		swSend(C, IOCON, 0x28);

		swSend(C, OLATA, 0xFF);
		swSend(C, OLATB, 0xFF);

		swSend(C, IODIRA, 0);
		swSend(C, IODIRB, 0);

		initG_MCP();

		//Set A7 - 1Hz A0 - 2Hz
		//swSend(0x0, OLATA, ~0x81);
		//swSend(0x0, OLATB, 0x80);

		std::cout << "Input Amplitude: ";
		cin >> vAmp;
		std::cout << "Modulating " << vAmp << " Volts..." << endl;
		modulate(vAmp);
		
		Sleep(1);

		
	
		for (i = 0; i < 10000; i++) {
			//test flex sensor
			//gatherFlexdata();
			
			//SPIdriver(i % 256);
			potSend(i % 256);
			printf("%d\n", i % 256);
			//if ((i % 256) == 0) {
			//	toggle = 1 - toggle;
			//
			//	if (toggle) {
			//		E_OFF(B, E3 | E7);
			//		E_OFF(A, E4 | E7);

			//		E_SEL(C, E2, E3);
			//		E_SEL(C, E6, E7);
			//		E_SEL(A, E5, E6);
			//		
			//		E_ON(C, (E2 | E3));
			//		E_ON(C, (E6 | E7));
			//		E_ON(A, (E5 | E6));

			//		cout << "Stimulating" << endl;
			//		cout << "E2 and E3 on 0X00 pair." << endl;
			//		cout << "E5 and E6 on 0X01 pair." << endl;


			//	}
			//	else {

			//		E_OFF(C, (E2 | E3));
			//		E_OFF(C, (E6 | E7));
			//		E_OFF(A, (E5 | E6));

			//		E_SEL(B, E0, E1);
			//		E_SEL(B, E4, E5);
			//		E_SEL(A, E4, E7);

			//		E_ON(B, (E3 | E7));
			//		E_ON(B, (E4 | E5));
			//		E_ON(A, (E4 | E7));
			//	
			//		cout << "Stimulating" << endl;
			//		cout << "E3 and E7 0X02 pair." << endl;
			//		cout << "E4 and E7 0X01 pair." << endl;
			//	
			//	}

			//}
			


			if (_kbhit() != 0)
				break;
			Wait(0.0025);

		}	
	}

	//swSend(IOCON, 0x28);// Byte mode setting

	//swSend(OLATA, 0xFF);// Turn off all relays
	//swSend(OLATB, 0xFF);// Turn off all relays
	//swSend(IODIRA, 0); // Set GPA to output
	//swSend(IODIRB, 0); // Set GPB to output

	///*
	////Set A7 - 1Hz A0 - 2Hz
	//swSend(OLATA, ~0x81);
	//swSend(OLATB, 0x80);
	//waitUntil();
	//*/
	//
	//printf("E4 - 2Hz  E3 - 1Hz\n");
	//E_ON(E4 | E3);
	//value = 0;
	//SEL_A(value, E4);
	//SEL_B(value, E3);
	//E_SEL(value);
	//waitUntil();
	//
	//printf("E4 - 1Hz  E3 - 2Hz\n");
	//E_ON(E4 | E3);
	//value = 0;
	//SEL_A(value, E3);
	//SEL_B(value, E4);
	//E_SEL(value);
	//waitUntil();


		
	//		swSend(OLATA, ~0xFF);// OLATA 0 means enable SPST
	//		swSend(OLATB, 0xFF);// OLATB 1 -> A, 0 -> B

	std::cout << "Closing AD2." << endl;
	Wait(2);
	// on close device is stopped and configuration lost
	//SPIdriver(0);
	FDwfDeviceClose(hdwf);
	std::cout << "Close. Press any key to exit." << endl;

		
	return 0;
}
	//}

