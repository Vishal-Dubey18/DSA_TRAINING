// Check eligibility: if age > 18 and citizen = true.
#include<iostream>
using namespace std;
int main(){
    int age;
    bool isCitizen;
    cin>>age>>isCitizen;
    if(age>18 && isCitizen){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not eligible to vote"<<endl;
    }
    return 0;
}