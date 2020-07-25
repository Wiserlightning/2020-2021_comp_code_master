///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the file for all code related to the driver controller section of
//      the competition code.
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"

#include "globals.h"
#include "subsystemHeaders/conveyor_intake.h"
#include "subsystemHeaders/drive.h"


void opcontrol(void) {
    pros::Task conveyor_intake_task(SetConveyorIntake, "ConveyorIntake Task");
    pros::Task drive_task(SetDrive, "Drive Task");
}