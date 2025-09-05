#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a==1){
        cout<<"Monday"<<endl;
    }
    else if(a==2){
        cout<<"Tuesday"<<endl;
    }
    else if(a==3){
        cout<<"Wednesday"<<endl;
    }
    else if(a==4){
        cout<<"Thursday"<<endl;
    }
    else if(a==5){
        cout<<"Friday"<<endl;
    }
    else if(a==6){
        cout<<"Saturday"<<endl;
    }
    else if(a==7){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}

// Alternative using switch-case
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch(a){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
    }
    return 0;
}*/


