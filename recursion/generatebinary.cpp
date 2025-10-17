#include<iostream>
#include<string>
using namespace std;

void generate(string s,int size){
  if(s.length()==size){
    cout<<s<<endl;
    return;
  }
  generate(s+'0',size);
  generate(s+'1',size);
}

void generateconsecutiveones(string s,int size){
  if(s.length()==size){
    cout<<s<<endl;
    return;
  }
  generateconsecutiveones(s+'0',size-1);
  if(s=="" || s[s.length()-1]=='0') generate(s+'1',size-1);
}

int main(){
  generate("",3);
  generateconsecutiveones("",3);
}