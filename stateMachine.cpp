#include <stateMachine.h>
using namespace std;


void init() {
    cState = INIT;
    nState = cState;

    // START = false;
    BUTTON_PRESS = false;
    BUSY =  false;

    BUTTON_SELECT = NONE;
}


void changeState() {
    switch(cState) {
        case INIT: {
            if (BUSY) {
                // Do initialization process here
                nState = cState;
            } else {
                if (BUTTON_PRESS) {
                    if (BUTTON_SELECT == START) {
                        nState = CALIB_ST;
                    } else {
                        nState = cState;      
                    }
                    BUTTON_SELECT = NONE;
                    BUTTON_PRESS = false;
                } else {
                    nState = cState;
                }
            }
            break;   
        }
        case CALIB_ST: {
            if(BUSY) {
                // Do Calibration of stimulation amplitude here
                nState = cState;
            } else {
                if(BUTTON_PRESS) {
                    if(BUTTON_SELECT == MAX_AMPLITUDE) {
                        nState = CALIB_FS;
                    } else {
                        nState = cState;
                    }
                    BUTTON_SELECT = NONE;
                    BUTTON_PRESS = false;
                } else {
                    nState = cState;
                }
            }
            break;
        }
        case CALIB_FS: {
            if(BUSY) {
                // Do Calibration of flex sensor here, get max and min values
                nState = cState;
            } else {
                if(BUTTON_PRESS) {
                    if(BUTTON_SELECT == SET_FLEXSENSOR_VALUES) {
                        nState = SETUP;
                    } else {
                        nState = cState;
                    }
                    BUTTON_SELECT = NONE;
                    BUTTON_PRESS = false;
                } else {
                    nState = cState;
                }
            }
            break;
        }
        case SETUP: {
            if(BUTTON_PRESS) {
                // Select if to proceed with manual or RL stimulation
                switch(BUTTON_SELECT) {
                    case MANUAL : nState = STIMULATE_M;  break;
                    case RL     : nState = STIMULATE_RL; break;
                    default     : nState = cState;       break;
                }
                BUTTON_SELECT = NONE;
                BUTTON_PRESS = false;
            } else {
                nState = cState;
            }
            break;
        }
        case STIMULATE_M: {
            if(BUSY) {
                // Do manual stimulation process here; selection and stimulation.
                nState = cState;
            } else {
                nState = CLEAN_UP;
            }
            break;
        }
        case STIMULATE_RL: {
            if(BUSY) {
                // Do RL stimulation process here
                nState = cState;
            } else {
                nState = CLEAN_UP;
            }
            break;
        }
        case CLEAN_UP: {
            if(BUSY) {
                // Do clean up here
                nState = cState;
            } else {
                nState = INIT;
            }
            break;
        }
        default: {
            nState = cState; 
            break;
        }
    }
}