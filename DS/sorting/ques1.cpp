#include<iostream>
#include<vector>
using namespace std;
//sort arrays of 0s and 1s

void display(vector<int>& v){
  for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
void sortmethod1(vector<int>& v){
  int n = v.size();
  int ones = 0 ;
  int zeros = 0;
  //counting
  for(int i=0;i<n;i++){
    if(v[i]==0) zeros++;
    else ones++;
  }

  //filling elements
  for(int i=0;i<n;i++){
    if(i<zeros) v[i] = 0;
    else v[i] = 1;
  }

}

void sortbytwopointermethod(vector<int>& v){
  int i=0;
  int j=v.size()-1;

  while(i<j){

    if(v[i]==0) i++;

    if(v[i]==i) j--;

    if(v[i]==1 && v[j]==0){
      int temp = v[i];
      v[i]=v[j];
      v[j]=temp;

      i++;
      j--;
    }
  }
}
int main(){

  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(0);
  v.push_back(1);

  display(v);
  sortbytwopointermethod(v);
  display(v);

}