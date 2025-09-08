// loops and iteration
#include<iostream>
using namespace std;
int main(){
    // Print numbers from 1 to 10 using a for loop.
    for (int i=1;i<=10;i++){
        cout<<i<<"--|"<<endl;
    }
    // Print the multiplication table of 5 using a for loop.
   for(int i=1;i<=10;i++){
    cout<<"5 X "<<i<<" = "<<5*i<<endl;
   } 
// Print all even numbers from 1 to 50 using a while loop.
   int i=1;
   while(i<=50){
    if(i%2==0){
        cout<<i<<" = EVEN"<<endl;
    }else{
        cout<<i<<" = ODD"<<endl;
    }
    i++;
   }
}
