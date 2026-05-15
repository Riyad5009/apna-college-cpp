#include<iostream>
using namespace std;
int main(){
    //outerloop
    for(int i=1;i<=5;i++){
        int val=i;
        //inner loop
        for(int j=1;j<=val;j++){
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
    return 0;
}