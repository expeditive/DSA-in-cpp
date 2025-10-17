#include<iostream>
#include<vector>
using namespace std;

int maxi(vector<int>& v,int idx){
  if(idx==v.size()) return 0;
  return max(v[idx],maxi(v,idx+1));
}

int main(){
  vector<int> v={5,25,98,24,75,45};
  maxi(v,0);

  cout<<maxi(v,0);
}
