// Swap two variables using a temporary variable.
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=5;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
   cout<<endl;

    //try another way
    a=10;
    b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
cout<<endl;

    //try another way by xor
    a=10;
    b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;

    return 0;


}