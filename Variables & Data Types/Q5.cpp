// Print limits of int, float, double (use <limits>).
#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "Limits of int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "Limits of float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "Limits of double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    return 0;
}
//concepts that ask in interview questions and competitive programming
//1. What is overflow and underflow?                                        