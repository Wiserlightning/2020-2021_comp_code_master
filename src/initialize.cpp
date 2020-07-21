///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the file for all code related to the initialization section of
//      the competition code.
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"

#include "globals.h"


void initialize(void) {
    motor_conveyor.setBrakeMode(kBreakModeHold);
    motor_intake.setBrakeMode(kBreakModeHold);
}