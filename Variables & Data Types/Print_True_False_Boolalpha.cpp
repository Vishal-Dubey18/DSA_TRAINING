// Print true and false using boolalpha.
#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    cout << boolalpha;  // Enable boolalpha
    cout << "The value of flag is: " << (flag) << endl;
    flag = false;
    cout << "The value of flag is: " << flag << endl;
    return 0;
}