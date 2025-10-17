#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>& a){
  for(int i=0;i<a.size(); i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void revertarray(vector<int>& b){
  for(int i=0,j=b.size()-1;i<=j;i++,j--){
      int temp;
      temp =b[j] ;
      b[j] = b[i];
      b[i] = temp;
  }
}

int main(){

  vector<int> v;
  v.push_back(3);
  v.push_back(9);
  v.push_back(7);
  v.push_back(33);
  v.push_back(0);

  display(v);

  revertarray(v);

  display(v);




}