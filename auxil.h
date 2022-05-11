// auxil.h
#include "dwf.h"
// --- ANALOG DISCOVER 2 --- 

double ad2_readAnalogIOVoltage(int channel)
{
	double temp;
	FDwfAnalogInStatus(hdwf, false, NULL);
	FDwfAnalogInStatusSample(hdwf, channel, &temp);

	return temp;
}

bool ifsleep(float seconds) {
	bool res = false;
	clock_t startClock = clock();
	float secondsAhead = seconds * CLOCKS_PER_SEC;
	// do nothing until the elapsed time has passed.
	if (clock() < startClock + secondsAhead)
		res = true;
	return res;
}


bool isADConnected()
{
	char szError[512] = { 0 };

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

void rampUpDown(float seconds, unsigned char* rampDirection)
{
	// switch for waveform generator output
	FDwfAnalogOutConfigure(hdwf, analogChannel, true);

	for (int i = 0; i <= steps; i++) {
		FDwfDigitalSpiWrite(hdwf, 0, 8, rampDirection, 1);
		Sleep(seconds / steps);
	}
}


void ad2_enableMasterSwitches(bool state)
{
	// start/stop acquisition
	FDwfAnalogInConfigure(hdwf, 0, state);

	// master switch for 5V supply
	FDwfAnalogIOEnableSet(hdwf, state);

	// master switch for digital outputs
	FDwfDigitalOutConfigure(hdwf, state);

	// switch for waveform generator output
	FDwfAnalogOutConfigure(hdwf, 0, state);
}

