#include <iostream>
using namespace std;

/*
INIT     - initialize AD2 and stimulation & switching circuits

CALIB_ST - setting of max stimulation amplitude.

CALIB_FS - calibration of flex sensor, max and min values.

SETUP    - choose manual stimulation or automated RL.

STIMULATE_M  - manual stimulation.

STIMULATE_RL - reinforcement learning stimulation.

CLEAN_UP - 0 stimulation amplitude, set all locations to off, and reflect to GUI.
*/
enum state {
    INIT,
    CALIB_ST,
    CALIB_FS,
    SETUP,
    STIMULATE_M,
    STIMULATE_RL,
    CLEAN_UP
};

enum button {
    NONE,
    START,
    MAX_AMPLITUDE,
    SET_FLEXSENSOR_VALUES,
    MANUAL,
    RL
};

int cState, nState;        //current state and next state
int BUTTON_SELECT;
bool BUSY, BUTTON_PRESS;

// Function Protocols

void init();
void changeState();