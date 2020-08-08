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

std::shared_ptr<okapi::ChassisController> drive_chassis = 
    okapi::ChassisControllerBuilder()
    .withMotors(
        {kMotorDriveLeftBack, kMotorDriveLeftMiddle, kMotorDriveLeftFront},
        {-kMotorDriveRightBack, -kMotorDriveRightMiddle, -kMotorDriveRightFront}
    )
    .withDimensions(kGreenGearCartridge, {{4_in, 10.01_in}, okapi::imev5GreenTPR})
    .withSensors(
        okapi::ADIEncoder{'A', 'B'},
        okapi::ADIEncoder{'G', 'H', true}
    )
    .build();


// Autonomous Drive Declaration

std::shared_ptr<okapi::AsyncMotionProfileController> motion_profiler = 
    okapi::AsyncMotionProfileControllerBuilder()
    .withLimits({
        kMotionProfileMaxLinVel,
        kMotionProfileMaxLinAccel,
        kMotionProfileMaxLinJerk
    })
    .withOutput(drive_chassis)
    .buildMotionProfileController();


// Motor Object Declarations

okapi::Motor motor_intake(kMotorIntake, false, kRedGearCartridge, kEncoderUnitTicks);
okapi::Motor motor_conveyor(kMotorConveyor, false, kBlueGearCartridge, kEncoderUnitTicks);


// Miscellaneous Object Declarations

okapi::Controller main_controller(okapi::ControllerId::master);


// Autonomous Object Declarations

auto conveyor_control_pos = okapi::AsyncPosControllerBuilder()
    .withMotor(motor_conveyor)
    .build();

auto intake_control_pos = okapi::AsyncPosControllerBuilder()
    .withMotor(motor_intake)
    .build();