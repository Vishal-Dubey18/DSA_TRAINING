// Show fall-through behavior in switch (no break).
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "One" << endl;
    case 2:
        cout << "Two" << endl;
    case 3:
        cout << "Three" << endl;
        break;
    default:
        cout << "Other number" << endl;
    }
    return 0;
}