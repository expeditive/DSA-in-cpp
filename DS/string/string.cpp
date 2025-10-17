#include<iostream>
using namespace std;

int main(){
  char str[] = {'a','f','t','j','b'};

  for(int i=0; str[i]!=0;i++){
    cout<<str[i]<<" ";
  }
  //string as a dtatype
  string name ="tejasva verma";
  cout<<name[4];

  cout<<name.size();
}