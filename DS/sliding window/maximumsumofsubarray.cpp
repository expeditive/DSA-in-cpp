#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int arr[]={2,4,69,2,46,3,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;//sized of subarray or window
  int max_sum = INT_MIN;

  
  int sum =0;//calculation of sum of first window;
  for(int i=0;i<k;i++){ 
    sum+=arr[i];
  }


  max_sum=sum;
  //sliding window
  int i=1;
  int j=k;
  while(j<n){
    sum= sum + arr[j] - arr[i-1];
    if(max_sum<sum){
      max_sum=sum;
    }
    i++;
    j++;
  }

  cout<<max_sum<<" ";

}