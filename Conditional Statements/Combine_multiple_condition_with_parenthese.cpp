// Combine multiple conditions with parentheses.
#include<iostream>
using namespace std;
int main(){
    int Age;
    char a;
    cin>>Age>>a;
    if((Age>=1 && Age<=80) || (a>='A' && a<='Z') || (a>='a' && a<='z')){
        cout<<"Valid input"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;

}