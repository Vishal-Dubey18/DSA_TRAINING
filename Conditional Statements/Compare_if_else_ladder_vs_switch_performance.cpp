// Compare if-else ladder vs switch performance.
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a==1){
        cout<<"one"<<endl;
    }else if (a==2){
        cout<<"two"<<endl;

    }else{
        cout<<"other number"<<endl;
    }

    switch(a){
        case 1:
        cout<<"one"<<endl;
        break;
        case 2:
        cout<<"two"<<endl;
        break;
        default:
        cout<<"other number"<<endl;
        break;  
    }
}