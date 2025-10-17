#include<iostream>
#include<vector>
using namespace std;

int main(){
  //declaration
  int arr[4][2]= {{3,5},{6,9},{99,23},{80,23}};
  int brr[4][2]= {4,3,67,89,99,6,8,3};
  int crr[][3]= {232,7,4,9,3,8};

  //traversal of arr[4][2]
  for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

}
