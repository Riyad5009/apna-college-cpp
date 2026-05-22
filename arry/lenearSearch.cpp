#include<iostream>
using namespace std;
int main(){
    int arr[]={12,24,39,30,10,14,3};
    int size=sizeof(arr)/sizeof(int);
    int key=100;
    for(int i=0;i<=size;i++){
        if(key==arr[i]){
            cout<<"Search result "<<arr[i];
        }
        
    }
    return 0;
}