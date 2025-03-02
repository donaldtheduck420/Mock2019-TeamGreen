/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Tankdrive.h"
#include "subsystems/DriveTrain.h"
#include "Robot.h"
#include "iostream"

using namespace std;

Tankdrive::Tankdrive() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::m_drive);
}

// Called just before this Command runs the first time
void Tankdrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Tankdrive::Execute() {
  double leftPow = Robot::m_oi->getLeftJoy()->GetY() *0.5;
  double rightPow = Robot::m_oi->getRightJoy()->GetY() *0.5;
  Robot::m_drive->tankDrive(leftPow, rightPow);
}

// Make this return true when this Command no longer needs to run execute()
bool Tankdrive::IsFinished() { return false; }

// Called once after isFinished returns true
void Tankdrive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Tankdrive::Interrupted() {}
