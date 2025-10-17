//partition the array such that sum till that point is equal to the sum after that point
#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int n = sizeof(arr)/sizeof(arr[0]);

  //formation of prefix sum
  for(int i=0;i<n;i++){
    arr[i]+=arr[i-1];
  }
  //check if that point exist or not
  bool flag = false;
  for(int i=0;i<n;i++){
    if(2*arr[i]==arr[n-1]){
      flag = true;
      break;
    }
  }
}