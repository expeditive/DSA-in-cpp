#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  string str="tejasva verma";

  //length
  cout<<str.length()<<endl;

  str.push_back('t');
  cout<<str<<endl;

  str.pop_back();
  cout<<str<<endl;

  //+ operator
  string name = "abhishek";
  string lastname = "verma";
  name = name + lastname;
  cout<<name<<endl;
  cout<<name + " is sexy "<<endl;

  //reverse
  string singer ="weekend";
  reverse(singer.begin(),singer.end());
  cout<<singer<<endl;

  //sorting
  string subject = "mathematics";
  sort(subject.begin(),subject.end());
  cout<<subject<<endl;
}