// Mini-project: build a namespace MathOps containing add(), subtract(), etc.
#include<bits/stdc++.h>
using namespace std; 
int main(){
    return 0;

}   
// Create a custom namespace with a variable and functions.
namespace MathOps{
    int add(int a, int b){
        return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }
    int mul(int a, int b){
        return a*b;
    }
    int div(int a, int b){
        return a/b;
    }
}