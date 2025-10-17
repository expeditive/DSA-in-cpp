#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v;  //need not to mention size of vector

  
  v.push_back(5);
  v.push_back(9);
  v.push_back(7);
  v.push_back(5);
  v.push_back(9);
  v.push_back(7);
  v.push_back(5);
  v.push_back(9);
  v.push_back(7);
  v.push_back(5);
  v.push_back(9);
  v.push_back(7);

    for(int i =0 ;i< v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  cout<<"size in start :"<<v.size()<<endl;
  cout<<"capacity in start :"<<v.capacity()<<" ";
  cout<<endl;


  v.pop_back();
  v.pop_back();

  for(int i=0; i < v.size(); i++){
    cout<<v[i]<<" ";
  }

  cout<<endl;

  cout<<"size after two pop back is :"<<v.size()<<endl;
  cout<<"capacity after two pop back is :"<<v.capacity()<<endl;

  cout<<"capacity in vectors never change after the initialization"<<endl;
}