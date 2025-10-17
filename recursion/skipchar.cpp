#include<iostream>
using namespace std;

void remov(string ans,string original){
  if(original.length()==0){
    cout<<ans;
    return;
  }
  char ch = original[0];
  if(ch == 'a') remov(ans,original.substr(1));
  else remov(ans+ch,original.substr(1));
}

int main(){
  string name = "tejasva verma";
  remov("",name);
}