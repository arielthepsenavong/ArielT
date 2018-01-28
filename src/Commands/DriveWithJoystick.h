#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "Commands/Command.h"
#include "Subsystems/Drive.h"
#include "WPILib.h"
#include "Joystick.h"
#include "Robot.h"

class DriveWithJoystick : public frc::Command {
public:
	DriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoystick_H
