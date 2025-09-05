// Categorize age group: child, teenager, adult, senior.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >>age;
    if(age>70){
        cout<<"Senior Citizen"<<endl;
    }else if(age>21){
        cout<<"Adult"<<endl;
    }else if(age>13){
        cout<<"Teenager"<<endl;
    }else{
        cout<<"Child"<<endl;
    
    }
}