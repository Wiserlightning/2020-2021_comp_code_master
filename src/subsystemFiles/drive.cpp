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

// Main Drive Function Declaration

void SetDrive(void) {
    drive_chassis->getModel()->arcade(
        main_controller.getAnalog(kControllerJoyLeftY),
        main_controller.getAnalog(kControllerJoyLeftX),
        kDriveControlDeadzone
    );
}