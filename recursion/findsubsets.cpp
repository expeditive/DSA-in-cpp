#include<iostream>
#include<vector>
using namespace std;


void subset(vector<int> v,int arr[],int size,int idx){

  if(idx==size){
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
  }

  subset(v,arr,size,idx+1);
  v.push_back(arr[idx]);
  subset(v,arr,size,idx+1);
}
int main(){
  int arr[] = {1,2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> v;
  subset(v,arr,n,0);
}