#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n = 8;
    int pgi[n];
    stack<int> s;
    pgi[0] = -1;
    s.push(0);

    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1;i<=n-1;i++){
        //pop all elements smaller than arr[i]
        while(s.size()>0 && arr[s.top()]<=arr[i]){
            s.pop();
        }
        //mark the answer in nge array
        if(s.size()==0) pgi[i]=-1;
        else pgi[i]=s.top();

        //push the arr[i]
        s.push(i);

    }

    for(int i=0;i<n;i++){
        
        cout<<pgi[i]<<" ";
    }
    cout<<endl;


}
