#include "main.h"
#include "subsystemHeaders/drive.hpp"
#include "subsystemHeaders/globals.hpp"
using namespace pros;

//Helper functions
void setDrive(int left, int right){
  driveLeftBack = left;
  driveLeftMiddle = left;
  driveLeftFront = left;
  driveRightBack = right;
  driveRightMiddle = right;
  driveRightFront = right;
}

//Driver Control Functions
void setDriveMotors(){
  int Joy_RY = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
  int Joy_RX = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
  //Deadzone
  if(abs(Joy_RY) < 10){
    Joy_RY = 0;
  }
  if(abs(Joy_RX) < 10){
    Joy_RX = 0;
  }
  
  int leftPower = Joy_RY + Joy_RX;
  int rightPower = Joy_RY - Joy_RX;
  setDrive(leftPower, rightPower);
}
 