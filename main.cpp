using namespace std;
#include <iostream>
#include <stateMachine.h>


// change of state every ms
void everyTWENTY_MS() {
    cState = nState;
}

int main() {
    init();                 // initialize values    
    changeState();          // checking of current state and values -- not sure of this is every 20 ms
}