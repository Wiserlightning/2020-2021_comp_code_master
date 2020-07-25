///////////////////////////////////////////////////////////////////////////////
//
// Discobots 2020-2021 Competition Code
//
// Authors:
//      Marco Tan (marco.tan.200405@gmail.com)
//      Neil Sachdeva (wiserlightning090@gmail.com)
//
// Purpose:
//      This is the header file for all conveyor and intake-related functions.
//      Functions are defined here and are declared in 
//      "subsystemFiles/conveyor.cpp".
//
///////////////////////////////////////////////////////////////////////////////

#ifndef CONVEYOR_H_
#define CONVEYOR_H_


// Operator Control Conveyor-Intake Function Definition

extern void SetConveyorIntake(void);


// Autonomous Control Conveyor Function Definition

extern void AutonSetConveyor(double pos_);
extern void AutonSetConveyor(double pos_, int speed_);
extern void AutonSetConveyor(double pos_, bool async_wait_);
extern void AutonSetConveyor(double pos_, int speed_, bool async_wait_);


// Autonomous Control Intake Function Definition

extern void AutonSetIntake(double pos_);
extern void AutonSetIntake(double pos_, int speed_);
extern void AutonSetIntake(double pos_, bool async_wait_);
extern void AutonSetIntake(double pos_, int speed_, bool async_wait_);

#endif // CONVEYOR_H_