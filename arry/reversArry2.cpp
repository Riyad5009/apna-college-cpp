//without extra space
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
     int st=0,end=n-1;
     while(st<end){
        //swap
        int temp=arr[st];  //have a swap key swap(arr[st],arr[end]);
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
     }
    return 0;
}

// output
// 1 2 3 4 5 