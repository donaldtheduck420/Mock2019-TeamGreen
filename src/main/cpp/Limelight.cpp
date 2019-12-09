// #include "../include/Limelight.h"
// #include <math.h>

// void Limelight::init() {
//     table = NetworkTable::GetTable("limelight");
//     std::shared_ptr<NetworkTable> table = nt::NetworkTableInstance::GetDefault().GetTable("limelight");
//     double tx = table->PutNumber("tx",0.0);
//     double ty = table->PutNumber("ty",0.0);
//     double ta = table->PutNumber("ta",0.0);
//     double ts = table->PutNumber("ts",0.0);
// }

// void Limelight::update() {
//     x = table->GetNumber("tx", 0.0);
//     y = table->GetNumber("ty", 0.0);
//     a = table->GetNumber("ta", 0.0);
//     v = table->GetNumber("ts", 0.0);
// }

// void Limelight::disable() {
//     table->GetEntry("pipeline")->setNumber(0);
// }

// int Limelight::getV() {
//     return v;
// }
// double Limelight::getX() {
//     return x;
// }
// double Limelight::getY() {
//     return y;
// }
// double Limelight::getA() {
//     return a;
// }
// NetworkTableEntry Limelight::getEntry(std::string entry) {
//     return table->GetEntry(entry);
// }

// void Limelight::setMoveConstants(double p, double min, double max, double y) {
//     moveP = p;
//     moveMin = min;
//     moveMax = max;
//     targetY = y;
// }
// void Limelight::setAlignConstants(double p, double min, double max) {
//     alignP = p;
//     alignMin = min;
//     alignMax = max;
// }

// double Limelight::align() {
//     if (abs(x) > 1) {
//         return aclamp(alignP * x, alignMin, alignMax);
//     }
//     return 0;
// }
// double Limelight::move() {
//     if (v == 1) {
//         return aclamp(moveP * (targetY - y), moveMin, moveMax);
//     }
//     return 0;
// }

// double Limelight::clamp(double n, double min, double max) {
//     return std::min(std::max(n, min), max);
// }
// double Limelight::aclamp(double n, double min, double max) {
//     if (n > 0) {
//         return clamp(n, min, max);
//     }
//     return clamp(n, -max, -min);
// }

// void Limelight::flash() {
//     table->GetEntry("ledMode").setNumber(2);
// }
