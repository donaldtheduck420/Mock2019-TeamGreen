/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "frc/WPIlib.h"
using namespace frc;

class OI {
 private:
  Joystick* armJoy;
  Joystick* leftJoy;
  Joystick* rightJoy; 

 public:
  Joystick* getLeftJoy();
  Joystick* getRightJoy();
  Joystick* getArmJoy();
  OI();
};
