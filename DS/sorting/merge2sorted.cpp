#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> v1 ={1,4,5,8};
  vector<int> v2 ={2,3,6,7,10};
  int n = v1.size()+v2.size();
  vector<int> v3(n);
  int i=0;
  int j=0;
  int k=0;
  while(i<v1.size() && j<v2.size()){
    if(v1[i]<=v2[j]){
      v3[k]=v1[i];
      i++;
      k++;
    }
    else if(v2[j]<v1[i]){
      v3[k]=v2[j];
      j++;
      k++;
    }
  }
    // Copy remaining elements of v1
  while (i < v1.size()) {
      v3[k++] = v1[i++];
  }

  // Copy remaining elements of v2
  while (j < v2.size()) {
      v3[k++] = v2[j++];
  }

  display(v1);
  display(v2);
  display(v3);
}