#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int n = sizeof(arr)/sizeof(arr[0]);

  //formation of prefix sum
  for(int i=0;i<n;i++){
    arr[i]+=arr[i-1];
  }
}