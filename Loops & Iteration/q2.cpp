#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    int i=0;
    int sum=0;

    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    int fab=1;
    for(int j=1;j<=num;j++){
        fab=fab*j;

    }
    cout<<fab<<endl;

    int k=1;
    int whilef=1;
    while(k<=num){
        whilef=whilef*k;
        k++;
    }
    cout<<whilef<<endl;

}
