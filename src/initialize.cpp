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

//Important variables
unsigned cur_obj;

//Helper function
void auton_selection(void){
    cur_obj = 0;
    pros::lcd::print(0, "Auton Selector v1");
    pros::lcd::print(1, "[Left] and [Right] to scoll");
    pros::lcd::print(2, "[Center] to select");
    while (true) {
        pros::lcd::print(3, "SELECTED AUTON's %s", possible_autons.at(cur_obj));
        if (pros::lcd::read_buttons() == LCD_BTN_LEFT){
            if (cur_obj == 0) {
                pros::lcd::print(4, "Error: Underflow error");
                pros::delay(1000);
                pros::lcd::clear_line(4);
            }else{
                cur_obj--;
                pros::delay(500);
            }
        }else if (pros::lcd::read_buttons() == LCD_BTN_RIGHT){
            if (cur_obj == num_of_autons) {
                pros::lcd::print(4, "ERROR: OVERFLOW ERR");
                pros::delay(1000);
                pros::lcd::clear_line(4);
            } else {
                cur_obj++;
                pros::delay(500);
            }
        } else if (pros::lcd::read_buttons() == LCD_BTN_CENTER) {
            sel_auton = possible_autons.at(cur_obj);
            pros::lcd::clear_line(3);
            pros::lcd::print(3, "AUTON SELECTED");
            pros::delay(500);
            pros::lcd::clear_line(3);
            pros::lcd::clear_line(4);
            break;
        }
        pros::delay(5);
    }
        
    

}
//Main Initialize
void initialize(void) {
    motor_conveyor.setBrakeMode(kBreakModeHold);
    motor_intake.setBrakeMode(kBreakModeHold);
}