#include "../include/Limelight.h"
#include <math.h>

std::shared_ptr<NetworkTable> Limelight::table;
int Limelight::v;
double Limelight::x, Limelight::y, Limelight::a;
double Limelight::moveP, Limelight::moveMin, Limelight::moveMax, Limelight::targetY;
double Limelight::alignP, Limelight::alignMin, Limelight::alignMax;

void Limelight::init() {
    table = nt::NetworkTableInstance::GetDefault().GetTable("limelight");
    double targetOffsetAngle_Horizontal = table->GetNumber("tx",0.0);
    double targetOffsetAngle_Vertical = table->GetNumber("ty",0.0);
    double targetArea = table->GetNumber("ta",0.0);
    double targetSkew = table->GetNumber("ts",0.0);
}

void Limelight::update() {
    x = table->GetNumber("tx", 0.0);
    y = table->GetNumber("ty", 0.0);
    a = table->GetNumber("ta", 0.0);
    v = table->GetNumber("ts", 0.0);
 }

 void Limelight::disable() {
     table->GetEntry("pipeline").SetDouble(0);
 }

 int Limelight::getV() {
     return v;
 }
 double Limelight::getX() {
     return x;
 }
 double Limelight::getY() {
     return y;
 }
 double Limelight::getA() {
     return a;
 }
 nt::NetworkTableEntry Limelight::getEntry(std::string entry) {
     return table->GetEntry(entry);
 }

 void Limelight::setMoveConstants(double p, double min, double max, double y) {
     moveP = p;
     moveMin = min;
     moveMax = max;
     targetY = y;
 }
 void Limelight::setAlignConstants(double p, double min, double max) {
     alignP = p;
     alignMin = min;
     alignMax = max;
 }

 double Limelight::align() {
     if (abs(x) > 1) {
         return aclamp(alignP * x, alignMin, alignMax);
     }
     return 0;
 }

 double Limelight::move() {
     if (v == 1) {
         return aclamp(moveP * (targetY - y), moveMin, moveMax);
     }
     return 0;
 }

 double Limelight::clamp(double n, double min, double max) {
     return std::min(std::max(n, min), max);
 }

 double Limelight::aclamp(double n, double min, double max) {
     if (n > 0) {
         return clamp(n, min, max);
     }
     return clamp(n, -max, -min);
 }

 void Limelight::flash() {
     table->GetEntry("ledMode").SetDouble(2);
 }
