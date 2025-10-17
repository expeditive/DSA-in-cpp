#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" "<<endl;

  }
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
  vector<int> v2(v.size());
  for(int i=0;i<v.size();i++){
    //i+j=v.size()-1
    int j = v.size()-1-i;
    v2[i]=v[j];
  }

  display(v2);

}