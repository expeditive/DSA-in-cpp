#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[]={5,4,6,2,3,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  //cyclic sort
  int i=0;
  while(i<n){
    int corridx=arr[i]-1;
    if(i==corridx) i++;
    else swap(arr[i],arr[corridx]);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}