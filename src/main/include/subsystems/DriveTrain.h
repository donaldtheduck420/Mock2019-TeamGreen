/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*-------------
---------------------------------------------------------------*/

#pragma once

#include "frc/commands/Subsystem.h"
#include "subsystems/Arm.h"
#include <ctre/Phoenix.h>
//#include "AHRS.h"


class DriveTrain : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  TalonSRX* left;
  TalonSRX* right;
  double leftPower;
  double rightPower;
 // AHRS* navX;

 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void tankDrive(double leftInput, double rightInput);
  double getPosition();
  void resetEncoders();
  //double getAngle();
  //void resetAngle();
};
