#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int st=0,end=n-1;
    int key=6;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}