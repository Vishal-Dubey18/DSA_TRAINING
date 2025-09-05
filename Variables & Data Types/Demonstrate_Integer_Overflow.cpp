// Demonstrate integer overflow.
#include<iostream>
using namespace std;
int main(){
    int a=2147483647; // Maximum value for a 32-bit signed integer
    int b=1;
    int c=a+b; // This will cause an overflow
    cout<<c;
    return 0;
}