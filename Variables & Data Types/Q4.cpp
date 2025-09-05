// Use sizeof() to display storage size of all primitive types.
#include<iostream>
using namespace std;
int main(){
    char a='a';
    int b=10;
    float c=10.5;
    cout<<"the size of char is "<<sizeof(a)<<" byte"<<endl;
    cout<<"the size of int is "<<sizeof(b)<<" bytes"<<endl;
    cout<<"the size of float is "<<sizeof(c)<<" bytes"<<endl;
    return 0;

}    