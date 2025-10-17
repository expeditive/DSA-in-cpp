//move all negative numbers to begining and positive to end with constant extra space
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}


void movenegsby2pointers(vector<int>& v){
  int i=0;
  int j=v.size()-1;
  while(i<j){
    if(v[i]>0) i++;
    if(v[j]<0) j--;
    if(v[i]<0 && v[j]>0){
      int temp = v[i];
      v[i]=v[j];
      v[j]=temp;

      i++;
      j--;
    }
  }
}
int main(){

  vector<int> v;
  v.push_back(-12);
  v.push_back(9);
  v.push_back(44);
  v.push_back(-9);
  v.push_back(90);

  display(v);
  movenegsby2pointers(v);
  display(v);

}