#include<iostream>

using namespace std;

int partition(int arr[],int si,int ei){
  int pivotelement = arr[si];
  int count =0;
  for(int i=si+1;i<=ei;i++){
    if(arr[i]<=pivotelement) count++;
  }
  int pivotidx = count + si;
  swap(arr[si],arr[pivotidx]);
  int i=si;
  int j=ei;
  while(i<pivotidx && j>pivotidx){
    if(arr[i]<=pivotelement) i++;
    if(arr[j]>pivotelement) j--;
    else if(arr[i]>pivotelement && arr[j]<=pivotelement){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
  }
  return pivotidx;
}

void quicksort(int arr[],int si, int ei){
  if(si>=ei) return;

  int pi = partition(arr,si,ei);

  quicksort(arr,si,pi-1);
  quicksort(arr,pi+1,ei);
}

int main(){
  int arr[]= {5,1,2,8,3,9,6,22,89};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

  }
  cout<<endl;
  quicksort(arr,0,n-1);

  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";

  }

}