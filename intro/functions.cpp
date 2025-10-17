#include<iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

//default parameters
int power(int base, int exp= 2){
  int result = 1;
  for(int i = 0; i<exp; i++) result *= base;
  return result;
}




int main(){
  int m =10;
  int n = 56;

  cout<< add(m,n);
  return 0;
}
