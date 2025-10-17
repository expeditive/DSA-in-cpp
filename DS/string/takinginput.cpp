#include<iostream>
using namespace std;

int main(){

  string s;
  cin>>s; //cin creates problem in taking input if string has spaces
  cout<<s;

  string name;

  getline(cin,name); //can take string with spaces
  cout<<name;

  //updation of string
  string var = "tejasva";
  var[2]='r';

  cout<<var;
}