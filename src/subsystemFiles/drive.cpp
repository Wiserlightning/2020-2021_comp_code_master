///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the file for all code related to the functioning of the drive
//      on the robot.
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"

#include "globals.h"
#include "subsystemHeaders/drive.h"


// Operator Control Drive Function Declaration

void SetDrive(void) {
    while (true) {
        drive_chassis->getModel()->arcade(
            main_controller.getAnalog(kControllerJoyRightY),
            main_controller.getAnalog(kControllerJoyRightX),
            kDriveControlDeadzone
        );
        pros::delay(20);
    }
}