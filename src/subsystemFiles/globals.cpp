#include "main.h"

//Motors
pros::Motor driveLeftBack(18, pros::E_MOTOR_GEARSET_18, false, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftMiddle(19, pros::E_MOTOR_GEARSET_18, false, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveLeftFront(20, pros::E_MOTOR_GEARSET_18, false, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightBack(8, pros::E_MOTOR_GEARSET_18, true, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightMiddle(9, pros::E_MOTOR_GEARSET_18, true, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);
pros::Motor driveRightFront(10, pros::E_MOTOR_GEARSET_18, true, pros::motor_encoder_units_e::E_MOTOR_ENCODER_COUNTS);

//Controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);
