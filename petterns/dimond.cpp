#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
        for(int s=1;s<=2*i-1;s++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int d=n;d>=1;d--){
        for(int j=1;j<=n-d;j++){
            cout<<' ';
        }
        for(int j=1;j<=2*d-1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}