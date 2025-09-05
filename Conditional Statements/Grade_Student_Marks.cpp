// Grade student marks: (90+ A, 75+ B, etc).
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>90){
        cout<<"A";

    }else if(marks>75){
        cout<<"B";
    }else if(marks>60){
        cout<<"C";
    }else if(marks>50){
        cout<<"D";
    }else{
        cout<<"F";
                
    }
}