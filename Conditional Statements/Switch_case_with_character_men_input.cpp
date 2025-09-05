// Switch-case with character menu input.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "Option A selected" << endl;
        break;
    case 'b':
        cout << "Option B selected" << endl;
        break;
    case 'c':
        cout << "Option C selected" << endl;
        break;
    default:
        cout << "Invalid option" << endl;
    }
    return 0;
}