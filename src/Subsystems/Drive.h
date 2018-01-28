#ifndef Drive_H
#define Drive_H

#include <Commands/Subsystem.h>
#include "ctre/phoenix.h"
#include "WPILib.h"
#include "Commands/DriveWithJoystick.h"

class Drive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	WPI_TalonSRX* talon1;
	WPI_TalonSRX* talon2;

public:
	Drive();
	void InitDefaultCommand();
	void driveWithJoystick(Joystick* stick);
};

#endif  // Drive_H
