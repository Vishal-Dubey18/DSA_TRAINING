// Create a mini-calculator: input two numbers, output sum, difference, product, division.
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    double sum,diff,prod,div;
    diff=a-b;
    prod=a*b;
    div=a/b;
    sum=a+b;
    cout<<sum<<endl;
    cout<<diff<<endl;
    cout<<prod<<endl;
    cout<<div<<endl;
    return 0;
    
}