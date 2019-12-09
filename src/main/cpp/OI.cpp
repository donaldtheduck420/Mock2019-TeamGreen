/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "commands/MoveArm.h"
#include "commands/ServoArm.h"
#include "commands/TankDrive.h"
#include "subsystems/Arm.h"
#include "subsystems/DriveTrain.h"
#include <frc/WPILib.h>
using namespace frc;

OI::OI() : leftJoy(new Joystick(3)), rightJoy(new Joystick(2)), armJoy(new Joystick(1)), servoBut(new JoystickButton(armJoy, 1)) {
  // Process operator interface input here.
  servoBut->WhenPressed(new ServoArm(180));
  servoBut->WhenReleased(new ServoArm(-180));
}

Joystick* OI::getLeftJoy() {
  return leftJoy;
}

Joystick* OI::getRightJoy() { 
  return rightJoy;
}

Joystick* OI::getArmJoy() {
  return armJoy;
}

JoystickButton* OI::getServoBut() {
  return servoBut;
}

