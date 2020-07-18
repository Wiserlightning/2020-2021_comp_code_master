#include "main.h"
#include "subsystemHeaders/drive.hpp"

void opcontrol(void) {
    while (true) {
        setDriveMotors();
        pros::delay(10);
    }
}