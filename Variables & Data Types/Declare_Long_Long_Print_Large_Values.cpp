// Declare long long and print large values.
#include <iostream>
using namespace std;

int main() {
    long long a = 10000000000;  // Large value
    long long b = 20000000000;  // Another large value
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The sum is: " << a + b << endl;

    // Demonstrate char as ASCII storage.
    char c = 'A';
    cout << "The ASCII value of " << c << " is: " << int(c) << endl;

    return 0;
}