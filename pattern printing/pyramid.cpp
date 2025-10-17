#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter hieght - ";
  cin>>n;
  //method 1
  for(int i=1;i<=n;i++){

    //for spaces
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }

    //for  stars pyramid
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  //method 2
  int nsp=n-1;
  int nst=1;

  for(int i=1;i<=n;i++){

    //spaces
    for(int j=1;j<=nsp;j++){
      cout<<" ";
    }
    nsp--;

    //stars
    for(int k=1;k<=nst;k++){
      cout<<"*";
    }
    nst+=2;

    cout<<endl;
  }
}