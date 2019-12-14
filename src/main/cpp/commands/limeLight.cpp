/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/limeLight.h"
#include "Limelight.h"
#include "Robot.h"
#include "OI.h"

limeLight::limeLight() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void limeLight::Initialize() {
  Limelight::init();
}

// Called repeatedly when this Command is scheduled to run
void limeLight::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool limeLight::IsFinished() { 
  return false; 
  
  }

// Called once after isFinished returns true
void limeLight::End() {
  
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void limeLight::Interrupted() {}

/*

if (Dave is a good coder){
  change the future to no dave good;
}

*/