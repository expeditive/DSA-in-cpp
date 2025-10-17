#include<iostream>
using namespace std;

int main(){
  // int x=7;
  // int* p=&x;

  // cout<<x<<endl;
  // cout<<*p;

  int x,y;

  int* p1 = &x;
  int* p2 = &y;
  cout<<"enter first number"<<endl;
  cin>>*p1;
  cout<<"enter second number"<<endl;
  cin>>*p2;


  cout<<x<<y;
}