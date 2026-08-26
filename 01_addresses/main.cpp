#include <iostream>

int main() {
    int age = 21;
    double price = 19.99;
    char grade = 'A';
    int numbers[3] = {10, 20, 30};

    std::cout << "Variable Details " << std::endl;
    std::cout << "age: Value=" << age << ", Address=" << &age << ", Size=" << sizeof(age) << " bytes\n";
    std::cout << "price: Value=" << price << ", Address=" << &price << ", Size=" << sizeof(price) << " bytes\n";
    std::cout << "grade: Value=" << grade << ", Address=" << (void*)&grade << ", Size=" << sizeof(grade) << " bytes\n"; 

    std::cout << "\n Consecutive Variables " << std::endl;
    std::cout << "Address of age:   " << &age << std::endl;
    std::cout << "Address of price: " << &price << std::endl;
    std::cout << "Address of grade: " << (void*)&grade << std::endl;

    std::cout << "\n Array Details " << std::endl;
    std::cout << "Array name address:  " << numbers << std::endl;
    std::cout << "First element ([0]): " << &numbers[0] << std::endl;
    std::cout << "Last element ([2]):  " << &numbers[2] << std::endl;

    int brandNewVar = 99;
    std::cout << "\n After declaring brandNewVar " << std::endl;
    std::cout << "Address of age still is: " << &age << std::endl;

    return 0;
}
