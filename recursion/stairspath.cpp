#include<iostream>

using namespace std;

int stairpermutations(int n){
  if(n==2) return 2;
  if(n==1) return 1;
  return stairpermutations(n-1) + stairpermutations(n-2);
}

int main(){
  cout<<stairpermutations(5);

}