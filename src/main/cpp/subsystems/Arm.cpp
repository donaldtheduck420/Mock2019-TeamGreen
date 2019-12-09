/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Arm.h"
#include "commands/MoveArm.h"
#include "commands/ServoArm.h"

Arm::Arm() : Subsystem("Arm"), arm(new TalonSRX(6)), servo(new Servo(1)) {

}

void Arm::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  //SetDefaultCommand(new Arm());
}

void Arm::setAngle(double degrees){
  Degree = degrees;
}

//void Arm::setPosition(double value){
  //servo->setPosition();
  
//}

/*double getAngle(){
  return 
}

double getPosition(){

}*/

double Arm::moveArm(double power){
  power = 0.5;
  arm->Set(ControlMode::PercentOutput, power);
}

double Arm::getArmPosition() {
  return arm->GetSelectedSensorPosition(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
