#include<iostream>
using namespace std;
//adding two matrics thier order must be same
int main(){

  int A[2][3] = {2,8,4,6,9,3};
  int B[2][3] = {9,1,5,9,33,5};
  int sum[2][3];

  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      sum[i][j] = A[i][j]+B[i][j];
    }
  }

  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }

}