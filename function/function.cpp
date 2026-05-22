#include<iostream>
using namespace std;
float ava(int a,int b,int c){
      float ans;
      ans=(a+b+c)/3.0;
      return ans;
}
int main(){
       cout<<ava(10,20,40);
    return 0;
}