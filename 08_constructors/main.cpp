#include <iostream>
using namespace std;

class Robot {
public:
    string name;

    Robot() {
        name = "Unknown Robot";
        cout << "Default constructor called!" << endl;
    }

    Robot(string robotName) {
        name = robotName;
        cout << "Parameterized constructor called!" << endl;
    }
};

int main() {
    Robot bot1;
    cout << "Bot 1 Name: " << bot1.name << "\n\n";

    Robot bot2("RoboOne");
    cout << "Bot 2 Name: " << bot2.name << "\n\n";

    return 0;
}
