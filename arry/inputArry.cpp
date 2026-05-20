#include<iostream>
using namespace std;
int main(){
    int arr[5];
//take input form user
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
    }
//print the result for user
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}