#include<iostream>
#include<string>
using namespace std;
bool palindromecheck(string s,int i,int j){
  if(i>j) return true;
  if(s[i]!=s[j]) return false;
  else return palindromecheck(s,i+1,j-1);
}
int main(){
  string s = "dad";
  cout<<palindromecheck(s,0,s.length()-1);
}
