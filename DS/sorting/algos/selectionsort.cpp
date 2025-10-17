#include<iostream>
#include<climits>
using namespace std;

void display(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<< arr[i] <<" ";
  }
  cout<<endl;
}
int main(){
  int arr[5] = {5,9,2,6,3};
  int n = 5;

  display(arr,5);

  for(int i=0; i<n; i++){
    int min = INT_MAX;
    int mindx = -1;

    //calculating minimum element
    for(int j =i;j<n;j++){
      if(arr[j]<min){
        min = arr[j];
        mindx =j;
      }
    }
    swap(arr[i],arr[mindx]);
  }

  display(arr,5);
}