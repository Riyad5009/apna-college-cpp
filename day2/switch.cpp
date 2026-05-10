#include<iostream>
using namespace std;
int main(){
    int roll;
    cout<<"Enter your roll:";
    cin>>roll;
    switch(roll){
        case 18: cout<<"Shawon"<<endl<<"3rd sem"<<endl<<"Pass"<<endl;
        break;
        case 19: cout<<"riyajul"<<endl<<"3rd sem"<<endl<<"Pass"<<endl;
        break;
        default: cout<<"Not match roll";
    }

    return 0;
}