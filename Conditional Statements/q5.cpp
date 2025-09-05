// Check if a year is leap year.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if((a%4==0 && a%100!=0) || (a%400==0)){
        cout<<"LEAP YEAR"<<endl;
    }
    else{
        cout<<"NOT A LEAP YEAR"<<endl;
    
    }
}