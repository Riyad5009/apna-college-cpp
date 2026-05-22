#include<iostream>
using namespace std;
int fac(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        num=i*num;
    }
    
    cout<<num;
    
}
int main(){
       fac(5);
    return 0;
}