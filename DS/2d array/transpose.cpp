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

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<"   ";

    }
    cout<<endl;
  }

  cout<<" the transpose of the matrix is : "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[j][i]<<"   ";

    }
    cout<<endl;
  }

}