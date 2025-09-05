// Show implicit conversion: int assigned to float.
// Show explicit conversion using (type) casting.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    float b;
    b=a; // implicit conversion from int to float
    cout<<"the value of b is "<<b<<endl;
    float c=10.5;
    int d;
    d=int(c); // explicit conversion from float to int
    cout<<"the value of d is "<<d<<endl;
    // another way of explicit conversion
    d=static_cast<int>(c);
    cout<<"the value of d is "<<d<<endl;
    //Use static_cast for safe conversion.
    d=static_cast<int>(a);
    cout<<"the value of d is "<<d<<endl;
    return 0;
}