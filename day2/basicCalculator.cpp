#include<iostream>
using namespace std;
int main(){
    int a,b;
    char oparetor;
    cout<<"Enter your value:"<<endl;
    cin>>a;
    cin>>b;
    cin>>oparetor;
    if(oparetor=='+'){
          cout<<a+b<<endl;
    }
    else if(oparetor=='-'){
         cout<<a-b<<endl;
    }
    else if(oparetor=='*'){
        cout<<a*b<<endl;
    }
    return 0;
}