///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the file for all code related to the functioning of the conveyor
//      and intake on the robot.
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"

#include "globals.h"
#include "subsystemHeaders/conveyor_intake.h"


// Local Variables

bool intake_state = false;

// Macro Functions

void ConveyorCycle(void) {
    motor_conveyor.moveVelocity(-600);
    motor_intake.moveVelocity(-100);
}

void ConveyorIndex(void) {
    motor_conveyor.moveVelocity(-600);
    pros::delay(kIndexTime);
    motor_conveyor.moveVelocity(0);
}

void ConveyorIntakeManual(void) {
    motor_conveyor.moveVelocity(-600);
}

void ConveyorReverseManual(void) {
    motor_conveyor.moveVelocity(600);
}

void IntakeIntake(void) {
    motor_intake.moveVelocity(-100);
}

void IntakePullBackMacro(void) {
    if (!intake_state) {
        motor_intake.moveVelocity(100);
        pros::delay(kIntakePullTime);
        motor_intake.moveVelocity(0);
        intake_state = true;
    } else {
        motor_intake.moveVelocity(-100);
        pros::delay(kIntakePullTime);
        motor_intake.moveVelocity(0);
        intake_state = false;
    }
}

void IntakePullBackManual(void) {
    motor_intake.moveVelocity(
        100 * (main_controller.getAnalog(kControllerJoyLeftY) / 1));
}


// Operator Control Conveyor-Intake Function Declaration

void SetConveyorIntake(void) {
    while (true) {
        if (main_controller.getDigital(kControllerButR1)) {
            ConveyorCycle();
        } else if (main_controller.getDigital(kControllerButL1)) {
            ConveyorIndex();
        } else if (main_controller.getDigital(kControllerButUp)) {
            ConveyorIntakeManual();
        } else if (main_controller.getDigital(kControllerButDown)) {
            ConveyorReverseManual();
        } else if (main_controller.getDigital(kControllerButR2)) {
            IntakeIntake();
        } else if (main_controller.getDigital(kControllerButL2)) {
            IntakePullBackMacro();
        } else if (std::abs(main_controller.getAnalog(kControllerJoyLeftY)) > 10) {
            IntakePullBackManual();
        } else {
            motor_conveyor.moveVelocity(0);
            motor_intake.moveVelocity(0);
        }
        pros::delay(20);
    }
}

