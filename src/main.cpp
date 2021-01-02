#include "main.h"
using namespace std;
using namespace pros;

//defining electronic ports
Motor leftFrontMotor(11);
Motor leftBackMotor(20);
Motor rightFrontMoto(1);
Motor rightBackMotor(10);
Motor leftRollerMotor(17);
Motor rightRollerMotor(7);
Motor intakeMotor(2);
Motor indexMotor(6);
Controller master(E_CONTROLLER_MASTER);

void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}


void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	pros::lcd::register_btn1_cb(on_center_button);
}


void disabled() {}

void competition_initialize() {}


void autonomous() {}


void opcontrol() {
	while(true){
		
	}
}
