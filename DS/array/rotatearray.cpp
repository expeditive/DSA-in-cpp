#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";

  }
  cout<<endl;
}

void reversePart(int i,int j,vector<int>& b){
  while(i<=j){
    int temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    i++;
    j--;
  }
  return;
}

void rotatearray(vector<int>& v,int rotation_key){

  int n = v.size();
  reversePart(0,n-rotation_key-1,v);
  reversePart(n-rotation_key,n-1,v);
  reversePart(0,n-1,v);
  display(v);

}



int main(){
  vector<int> v;
  v.push_back(4);
  v.push_back(6);
  v.push_back(2);
  v.push_back(7);
  v.push_back(49);
  v.push_back(8);
  v.push_back(6);

  display(v);
  rotatearray(v,3);
}