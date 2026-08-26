#include <iostream>

int main() {
    int myNumber = 50;
    int* myPointer = &myNumber; 

    std::cout << "Initial State"  << std::endl;
    std::cout << "Variable value:" << myNumber << std::endl;
    std::cout << "Pointer holds address:" << myPointer << std::endl;
    std::cout << "Dereferenced pointer: " << *myPointer << std::endl;

    myNumber = 100;
    std::cout << "\n After changing variable directly" << std::endl;
    std::cout << "Variable value:" << myNumber << std::endl;
    std::cout << "Dereferenced pointer:" << *myPointer << std::endl;

    *myPointer = 200;
    std::cout << "\n After changing via pointer" << std::endl;
    std::cout << "Variable value:" << myNumber << std::endl;
    std::cout << "Dereferenced pointer:" << *myPointer << std::endl;

    int secondNumber = 777;
    myPointer = &secondNumber; 
    std::cout << "\n After switching pointer to secondNumber" << std::endl;
    std::cout << "Pointer holds address:" << myPointer << std::endl;
    std::cout << "Dereferenced pointer: " << *myPointer << std::endl;

    return 0;
}
