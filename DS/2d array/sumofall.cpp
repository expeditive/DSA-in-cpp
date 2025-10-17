#include<iostream>
using namespace std;
int main(){
  int m;
  int n;
  cout<<"Enter the number of rows : ";
  cin>>m;
  cout<<"Enter the number of columns : ";
  cin>>n;
  int arr[m][n];

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<"Enter the number at"<<"("<<i<<","<<j<<") :"<<" ";
      cin>>arr[i][j];
    }
    cout<<endl;
  }

  int sum=0;
  for(int i =0;i<m;i++){
    for(int j=0;j<n;j++){
      sum = sum+arr[i][j];
    }
  }

  cout<<" the sum of all the elemnts is : "<<sum;
}