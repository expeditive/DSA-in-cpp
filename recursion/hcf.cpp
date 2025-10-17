#include<iostream>
using namespace std;


int hcf(int a,int b){
  if(a==0) return b;
  return hcf(b%a,a);
}

int main(){
  int a=10000;
  int b=10001;
  cout<<hcf(a,b)<<endl;
}