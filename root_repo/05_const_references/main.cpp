#include <iostream>
#include <cstring> 
using namespace std;

struct Robot {
    char name[64];
    float wheelSpeeds[4];
    int batteryPercent;
};

void printRobot(const Robot& r) {
    cout << "Robot Info (Const Reference)\n";
    cout << "Name: " << r.name << "\n";
    cout << "Battery: " << r.batteryPercent << "%\n";
    cout << "Speeds: " << r.wheelSpeeds[0] << ", " << r.wheelSpeeds[1] << "\n";
}

void modifyRobotByValue(Robot rCopy) {
    rCopy.batteryPercent = 50; 
    cout << "\n[Inside Function] Changed copy battery to: " << rCopy.batteryPercent << "%\n";
}

int main() {
    cout << "Size of Robot struct: " << sizeof(Robot) << " bytes\n\n";

    Robot myRobot = {"RoboOne", {1.5, 1.5, 1.2, 1.2}, 85};

    printRobot(myRobot);

    modifyRobotByValue(myRobot);

    cout << "[In Main] Original robot battery is still: " << myRobot.batteryPercent << "%\n";

    return 0;
}
