///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the file for global variable declarations of global variables
//      defined in the header file "globals.h"
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"
#include "globals.h"

using namespace okapi::literals;


// Drive Declaration

std::shared_ptr<okapi::ChassisController> drive_chassis = okapi::ChassisControllerBuilder()
    .withMotors(
        {kMotorDriveLeftBack, kMotorDriveLeftMiddle, kMotorDriveLeftFront},
        {-kMotorDriveRightBack, -kMotorDriveRightMiddle, -kMotorDriveRightFront}
    )
    .withDimensions(k200GearCartridge, {{4_in, 10_in}, okapi::imev5GreenTPR})
    .withSensors(
        okapi::ADIEncoder{'A', 'B'},
        okapi::ADIEncoder{'C', 'D', true}
    )
    .build();


// Motor Object Declarations

okapi::Motor motor_intake(kMotorIntake, false, k100GearCartridge, kEncoderUnitTicks);
okapi::Motor motor_conveyor(kMotorConveyor, false, k600GearCartridge, kEncoderUnitTicks);


// Miscellaneous Object Declarations

okapi::Controller main_controller(okapi::ControllerId::master);