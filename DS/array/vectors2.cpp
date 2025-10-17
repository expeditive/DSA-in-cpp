#include<iostream>
#include<vector>
using namespace std;

int main(){

  //if vector initialized with size then its capacity and size will be same and values filledwith zero
  vector<int> v(5);
  cout<<"size :"<<v.size()<<endl;
  cout<<"capacity :"<<v.capacity()<<endl;

  for(int i =0;i<v.size();i++){
    cout<<v[i]<<endl;
  }

  vector<int> vec(4,6);//means vector with size 4 and all values are 6

}