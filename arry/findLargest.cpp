#include<iostream>
using namespace std;
int main(){
    int arr[]={12,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest is ="<<max;
    return 0;
}