#include<iostream>
using namespace std;

int main(){
  string s;
  cout<<" enter the string : ";
  cin>>s;
  int len = s.length();
  int count=0;

  for(int i=0;i<len;i++){
    if(i==0){
      if(s[i]!= s[i+1]) count++;   
    }
    else if(i==len-1){
      if(s[i] != s[i-1]) count++;
    }
    else if(s[i] != s[i+1] && s[i]!=s[i-1]) count++;
  } 

  cout<<count;
}