#include<iostream>
using namespace std;
int main(){
    int f1=0;
    int f2=1;
   
    for(int i=0;i<10;i++){
        cout<<f1<<endl;
        int next=f1+f2;
        f1=f2;
        f2=next;


    }
}