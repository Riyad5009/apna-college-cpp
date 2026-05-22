#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int copy[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;//formula
        copy[i]=arr[j];//the vlue of arr[j] store in copy[i]
        cout<<copy[i]<<' ';
    }
    return 0;
}

// output
// 1 2 3 4 5 