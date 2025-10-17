#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int arr[6]={2,6,93,5,1,8};
  int n = 6;

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
  //bubble sorting 
  for(int i=0;i<n-1;i++){

    bool flag = true;
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag = false ;
      }
    }

    if(flag == true ){
      break;
    }
  }

  cout<<endl;

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }


}