// Nested if: check if number is divisible by 2, then also by 4.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"the number is divisible by 2"<<endl;
        if(a%4==0){
            cout<<"the number is also divisible by 4"<<endl;
        }
        else{
            cout<<"the number is not divisible by 4"<<endl;
        }
    }
    else{
        cout<<"the number is not divisible by 2"<<endl;
    
    }
}