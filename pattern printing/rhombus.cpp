#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter hieght";
  cin>>n;

  for(int i=1;i<=n;i++){

    //loopfor spaes
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
  

    //loop for stars
    for(int j=1;j<=n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}