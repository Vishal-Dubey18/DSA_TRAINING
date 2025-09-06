// mini project using conditional statements
#include<iostream>
#include<string>
using namespace std;
int main(){
    string action;
    int amount;
    cout<<"Enter action (deposit/withdraw): ";
    cin>>action;
    cout<<"Enter amount: ";
    cin>>amount;
    if(action=="deposit"){
        cout<<"Depositing "<<amount<<" dollars."<<endl;
    }
    else if(action=="withdraw"){
        cout<<"Withdrawing "<<amount<<" dollars."<<endl;
    }
    else{
        cout<<"Invalid action."<<endl;
    }
    return 0;
}