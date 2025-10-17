#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v, int idx){
  if(idx==v.size()) return;
  cout<<v[idx]<<" ";
  display(v,idx+1);
}
int main(){

  vector<int> v={2,5,2,7,4,7,3};
  display(v,0);

}