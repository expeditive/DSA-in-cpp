#include<iostream>
using namespace std;

int countvowel(string s){
  int i=0;
  int count =0;
  while(s[i] != '\0'){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
      count++;
    }
    i++;
  }

  return count;
}

int main(){

  string name = "tejasvav";

  int var = countvowel(name);

}