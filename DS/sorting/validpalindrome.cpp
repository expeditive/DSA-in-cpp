#include<iostream>
using namespace std;

bool isPalindrome(string s) {

  for(int i=0;i<s.size();i++){
      s[i]=tolower(s[i]);
  }

  cout<<s<<endl;
  int i=0;
  int j=s.size()-1;
  while(i<=j){
      if(s[i]==s[j]){
          i++;
          j--;
      }
      else{
          return false;
      }
  }
  return true;

}

int main(){
  bool mx = isPalindrome("A man, a plan, a canal: Panama");
  cout<<mx<<endl;
}