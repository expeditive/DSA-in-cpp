#include<iostream>

using namespace std;

int binary_to_dec(string binary){
  int n = binary.size();
  int result =0;
  for(int i =n-1;i>=0;i--){
    char ch = binary[i];
    int num = ch-'0';
    result = result + num*( 1 << (n-i-1)); // 1<<x = 1 * 2 ki power x
  }

  return result;
}

string dec_to_binary(int num){
  string binary="";
  while(num>0){
    if(num % 2 ==0){
      //even
      binary = "0" + binary;
    } else {
      //odd
      binary = "1" + binary;
    }
    num = num >> 1; // x >> 1 = x devide by 2
  }
  return binary;
}

int main(){
  cout<<binary_to_dec("1000");
}