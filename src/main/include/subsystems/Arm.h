/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <ctre/Phoenix.h>
#include "frc/Servo.h"
#include "frc/WPILib.h"

using namespace frc;

class Arm : public frc::Subsystem {
 private:
  TalonSRX* arm;
  Servo* servo;
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities


 public:
 
  Arm();
  void InitDefaultCommand() override;
  double getPosition();
  double getAngle();
  void setPosition(double value);
  void setAngle(double degrees);
  double moveArm(double power);
  double getArmPosition();
  double Degree;
  double Pos;
};
