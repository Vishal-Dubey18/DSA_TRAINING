// Logical operators: check if number is between 10 and 20.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=10 && a<=20){
        cout<<"the number is between 10 and 20"<<endl;
    }
    else{
        cout<<"the number is not between 10 and 20"<<endl;
    }
    return 0;
}