/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ServoArm.h"
#include "subsystems/Arm.h"
#include "Robot.h"
#include "iostream"

using namespace frc;

ServoArm::ServoArm(double mypower) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::servo);
  servoPower = mypower;
}

// Called just before this Command runs the first time
void ServoArm::Initialize() {
  Robot::servo->setAngle(0);
}

// Called repeatedly when this Command is scheduled to run
void ServoArm::Execute() {
  double Degree;
  Robot::servo->setAngle(Degree);
}

// Make this return true when this Command no longer needs to run execute()
bool ServoArm::IsFinished() { 

  return false; 
  }

// Called once after isFinished returns true
void ServoArm::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ServoArm::Interrupted() {}
