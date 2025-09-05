// Show difference between signed and unsigned integers
#include <iostream>
using namespace std;

int main() {
    int a = -5;          // signed integer
    unsigned int b = 5;  // unsigned integer

    cout << "Signed int: " << a << endl;
    cout << "Unsigned int: " << b << endl;
    int sum =0;
    // Demonstrating the difference
    if (a < 0) {
        sum+=a;
        cout << "Signed int can represent negative values." << endl;
    }
    if (b > 0) {
        sum+=b;

        cout << "Unsigned int cannot represent negative values." << endl;
    }
  cout<<"the sum is "<<sum<<endl;
    return 0;
}