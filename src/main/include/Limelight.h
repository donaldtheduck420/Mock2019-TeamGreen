 #include <networktables/NetworkTable.h>
 #include <networktables/NetworkTableEntry.h>
 #include <networktables/NetworkTableInstance.h>
 #include <frc/smartdashboard/Smartdashboard.h>
 #include <frc/TimedRobot.h>
 #include <string>
 #include <iostream>

 class Limelight {
     private:
        static std::shared_ptr<NetworkTable> table;
        static int v;
        static double x, y, a;
        static double moveP, moveMin, moveMax, targetY;
        static double alignP, alignMin, alignMax;

        static double clamp(double n, double min, double max);
        static double aclamp(double n, double min, double max);
     public:
        static void init();
        static void update();
        static void disable();
        static int getV();
        static double getX();
        static double getY();
        static double getA();
        static nt::NetworkTableEntry getEntry(std::string entry);
        static void setMoveConstants(double p, double min, double max, double y);
        static void setAlignConstants(double p, double min, double max);
        static double align();
        static double move();
        static void flash();
 };