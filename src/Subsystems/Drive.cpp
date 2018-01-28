#include "Drive.h"
#include "../RobotMap.h"
#include "ctre/phoenix.h"

Drive::Drive() : Subsystem("Drive") {
	talon1 = new WPI_TalonSRX(1);
	talon2 = new WPI_TalonSRX(2);
}

void Drive::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick);
}

void Drive::driveWithJoystick(Joystick* stick){
	double power = stick->GetY();
	if(fabs(power)<0.1){
		power = 0;
	}
	talon1->Set(power);
	talon2->Set(power);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
