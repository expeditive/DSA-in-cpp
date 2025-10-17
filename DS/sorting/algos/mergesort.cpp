#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& v1,vector<int>& v2){

  vector<int> v3;
  int i=0,j=0,k=0;

  while(i<v1.size() && j<v2.size()){
    if(v1[i]>v2[j]){
      v3[k]=v2[j]; 
      j++;
      k++;
    } 
    else if(v1[i]<v2[j]){
      v3[k]=v1[i];
      i++;
      k++;
    }
    else{
      v3[k]=v1[i];
      i++;
      k++;
      v3[k]=v2[j];
      j++;
      k++;
    }
  }
  if(i==v1.size()-1 && j!=v2.size()-1){//v2 remains
    while(j<=v2.size()-1){
      v3[k]=v2[j];
      j++;
      k++;
    }
  }
  if(j==v2.size()-1 && i!=v1.size()-1){//v1 remains
    while(i<=v1.size()-1){
      v3[k]=v1[i];
      i++;
      k++;
    }
  }
  return v3;

}

vector<int> merge2(vector<int>& v1, vector<int>& v2) {
    vector<int> v3;
    int i = 0, j = 0;

    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]) {
            v3.push_back(v1[i++]);
        } else if(v1[i] > v2[j]) {
            v3.push_back(v2[j++]);
        } else { // equal elements
            v3.push_back(v1[i++]);
            v3.push_back(v2[j++]);
        }
    }

    while(i < v1.size()) v3.push_back(v1[i++]);
    while(j < v2.size()) v3.push_back(v2[j++]);

    return v3;
}

void mergesort(vector<int>& v){
  int n=v.size();
  if(n==1) return;
  int n1=n/2, n2 = n-n/2;
  vector<int> v1(n1);
  vector<int> v2(n2);
  for(int i=0;i<n1;i++){
    v1[i]=v[i];
  }
  for(int i=0;i<n2;i++){
    v2[i]=v[i+n1];
  }
  mergesort(v1);
  mergesort(v2);
  v=merge2(v1,v2);

}
int main(){
  vector<int> x={9,2,6,3,8};
  mergesort(x);

  for(int i=0;i<x.size();i++){
    cout<<x[i]<<" ";
  }

}