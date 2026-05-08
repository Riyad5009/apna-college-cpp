#include<iostream>
#include <string>
using namespace std;
int main(){
    //coustomer info
    string name="Abrar";
    int acnum=122;
    int pass=89915;
    int blance=500;

    //bank system
    int acnumb;
    int passb;

    //condition part
    cout<<"Enter your account number:";
    cin>>acnumb;
    if(acnum==acnumb){
        cout<<"Enter your password";
        cin>>passb;
        if(passb==pass){
            cout<<"Dear"<<name <<endl;
            cout<<"Your blance is:"<<blance<<"taka";
        }

    }
    else{
        cout<<"Wrong number";
    }
    return 0;
}