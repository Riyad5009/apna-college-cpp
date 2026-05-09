#include<iostream>
using namespace std;
//largest of 2 numbers
int main(){
    int a,b;
    cout<<"Enter your first number:";
    cin>>a;
    cout<<"Enter your second number:";
    cin>>b;
    if(a>=b){
        cout<<"The largest number is:"<<a <<endl;
    }
    else{
        cout<<"The largest number is:"<<b<<endl;
    }
    return 0;
}