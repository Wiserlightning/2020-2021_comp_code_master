///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the header file for all constants and global variables that
//      will be used throughout this project. Constants are declared here.
//      Variables like some objects and global values will be defined here
//      and declared in the file "globals.cpp"
//
///////////////////////////////////////////////////////////////////////////////

#include "main.h"

#ifndef GLOBALS_H_
#define GLOBALS_H_


// Motor Variable Constants

const auto kRedGearCartridge = okapi::AbstractMotor::gearset::red;
const auto kGreenGearCartridge = okapi::AbstractMotor::gearset::green;
const auto kBlueGearCartridge = okapi::AbstractMotor::gearset::blue;
const auto kEncoderUnitTicks = okapi::AbstractMotor::encoderUnits::counts;
const auto kBreakModeHold = okapi::AbstractMotor::brakeMode::hold;


// Controller Variable Constants

const auto kControllerJoyLeftX = okapi::ControllerAnalog::leftX;
const auto kControllerJoyLeftY = okapi::ControllerAnalog::leftY;
const auto kControllerJoyRightX = okapi::ControllerAnalog::rightX;
const auto kControllerJoyRightY = okapi::ControllerAnalog::rightY;
const auto kControllerButL1 = okapi::ControllerDigital::L1;
const auto kControllerButL2 = okapi::ControllerDigital::L2;
const auto kControllerButR1 = okapi::ControllerDigital::R1;
const auto kControllerButR2 = okapi::ControllerDigital::R2;
const auto kControllerButA = okapi::ControllerDigital::A;
const auto kControllerButB = okapi::ControllerDigital::B;
const auto kControllerButX = okapi::ControllerDigital::X;
const auto kControllerButY = okapi::ControllerDigital::Y;
const auto kControllerButUp = okapi::ControllerDigital::up;
const auto kControllerButDown = okapi::ControllerDigital::down;
const auto kControllerButLeft = okapi::ControllerDigital::left;
const auto kControllerButRight = okapi::ControllerDigital::right;


// Motor Port Numbers

const int kMotorDriveLeftBack = 18;
const int kMotorDriveLeftMiddle = 19;
const int kMotorDriveLeftFront = 20;
const int kMotorDriveRightBack = 8;
const int kMotorDriveRightMiddle = 9;
const int kMotorDriveRightFront = 10;
const int kMotorIntake = 1;
const int kMotorConveyor = 2;


// Drive-related Constants

const double kDriveControlDeadzone = 10.0;
const double kMotionProfileMaxLinVel = 1.0;
const double kMotionProfileMaxLinAccel = 2.0;
const double kMotionProfileMaxLinJerk = 10.0;


// Miscellaneous Constants

const int kIndexTime = 1 * 1000;
const int kIntakePullTime = 2 * 1000;


// Motor Object Definitions

extern okapi::Motor motor_intake;
extern okapi::Motor motor_conveyor;

// Drive-related Object Definitions

extern std::shared_ptr<okapi::ChassisController> drive_chassis;
extern std::shared_ptr<okapi::AsyncMotionProfileController> motion_profiler;


// Miscellaneous Object Definitions

extern okapi::Controller main_controller;


#endif // GLOBALS_H_