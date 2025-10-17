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

  //printing spiral 

  int minr=0, maxr=m-1;
  int minc=0, maxc=n-1;
  int tnums=m*n;
  int count = 0;
  while(minc<=maxc && minr<=maxr){

    //right
    for(int j=minc;j<=maxc && count<tnums;j++){

      cout<<arr[minr][j]<<" ";
      count++;

    }minr++;

    //down
    for(int i=minr;i<=maxr && count<tnums ;i++){

      cout<<arr[i][maxc]<<" ";
      count++;

    }maxc--;

    //left
    for(int j=maxc;j>=minc && count<tnums ;j--){

      cout<<arr[maxr][j]<<" ";
      count++;

    }maxr--;

    //up
    for(int i=maxr;i>=minr && count< tnums;i--){

      cout<<arr[i][minc]<<" ";
      count++;
      
    }minc++;
  }
}