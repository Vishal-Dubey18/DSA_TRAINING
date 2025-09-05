// Demonstrate scope: local vs global variable with same name
#include <iostream>
using namespace std;

int x = 10;  // Global variable

void display() {
    int x = 20;  // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;  // Access global variable
}

int main() {
    display();



    // Show effect of static variable inside a function.
    static int y = 30;  // Static variable
    y++;
    cout << "Static y: " << y << endl;
    // Show default values of uninitialized global variables.
    int z;
    cout << "Default global z: " << z << endl;

    return 0;
}