#include<iostream>
using namespace std;
int main(){
    int marks[5]={7,5,2,1,3};
    int size=sizeof(marks)/sizeof(int);//sizeof(marks)=20 because every block is 4byt, so have to divide int 4byt with size of marks
    for(int idx=0;idx<=size-1;idx++){
        cout<<marks[idx]<<' ';
    }
    return 0;
}