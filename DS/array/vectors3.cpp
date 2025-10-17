#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
  //takking input in vector
  vector<int> v;
  int n;
  cout<<"enter the wanted size of the vector"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cout<<"enter the number to insert - "<<endl;
    cin>>x;
    v.push_back(x);
  }

  cout<<"Your values are : ";
  for(int i=0;i<n;i++){
    cout<<v.at(i)<<" ";
  }
  //sorting
  sort(v.begin(),v.end());
  cout<<endl;

    cout<<"Your sorted values are : ";
  for(int i=0;i<n;i++){
    cout<<v.at(i)<<" ";
  }
}
