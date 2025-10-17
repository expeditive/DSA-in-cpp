#include<iostream>
using namespace std;

int main(){

  int arr[5] = {4,9,8,3,5};

  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;

  for(int i =0; i<5 ;i++){
    int j=i;
    while(j>=1){
      if(arr[j]>arr[j-1]) break;
      else swap(arr[j],arr[j-1]);
      j--;
    }
  }

  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}