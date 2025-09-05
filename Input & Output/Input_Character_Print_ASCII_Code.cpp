// Input a character and print its ASCII code.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for( auto i:s){
        cout<<"the ASCII value of "<<i<<" is "<<int(i)<<endl;
    }
    int a;
    cin>>a;
    cout<<"the character for ASCII value "<<a<<" is "<<char(a)<<endl;
    

    
    return 0;
}