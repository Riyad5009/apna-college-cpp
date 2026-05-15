#include<iostream>
using namespace std;
int main(){
    //outerloop
    for(int i=1;i<=4;i++){
        int val=i;
        //outer loop
        for(int j=1;j<=4;j++){
            cout<<val<<' ';
        }
        cout<<endl;
    }
    return 0;
}

// outputis
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
// 4 4 4 4 