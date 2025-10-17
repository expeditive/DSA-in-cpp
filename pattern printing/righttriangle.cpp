#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the hieght of the triangle :";
  cin>>n;

  //straight
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  //inverted
  for(int i=n;i>0;i--){
    for(int j=i;j>0;j--){
      cout<<"*";
    }
    cout<<endl;
  }
}