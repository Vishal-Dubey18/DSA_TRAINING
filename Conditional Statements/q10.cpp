// Switch-case: mini calculator (add, subtract, multiply, divide).
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cin>>a>>b>>op;
    switch (op)
    {
        case'+':
            cout<<a+b<<endl;
            break;
        case'-':
            cout<<a-b<<endl;
            break;
        case'*':
            cout<<a*b<<endl;
            break;
        case'/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
            break;
    }
    return 0;
}