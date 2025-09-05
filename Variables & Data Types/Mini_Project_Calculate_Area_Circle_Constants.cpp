// Mini-project: create a program that calculates area of a circle using constants.
#include <iostream>
using namespace std;

#define PI 3.14

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}