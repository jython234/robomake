/// Generated by robomake
#include <iostream>

#include "Robot.hpp"

using namespace std;

Robot::Robot() {
	cout << "Constructor called!" << endl;
}

void Robot::RobotInit() {
    // This is just a demonstration of "using" a subsystem.
	cout << "Robot Init." << endl;
}

START_ROBOT_CLASS(Robot)
