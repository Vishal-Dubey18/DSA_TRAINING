// Define a constant using const.Define a constant using #define.
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14
int main(){
    const int a=10+20;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of PI is "<<PI<<endl;
    // a=20;  // Uncommenting this line will cause a compilation error
    cout<<"the value of a is "<<a<<endl;

    // Difference between literal constants (5, 3.14) and named constants.
    cout<<"the value of 5 is "<<5<<endl;
    cout<<"the value of PI is "<<PI<<endl;
    return 0;
}

 