// Demonstrate precision difference between float and double.
#include <iostream>
#include <iomanip>

int main() {
    float a = 1.1234f;
    double b = 1.123456789;
    std::cout << std::fixed << std::setprecision(9);
    std::cout << "Float: " << a << std::endl;
    std::cout << "Double: " << b << std::endl;
    return 0;
}