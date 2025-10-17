#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n = 8;
    int nge[n];
    stack<int> s;
    nge[n-1] = -1;
    s.push(arr[n-1]);

    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=n-2;i>=0;i--){
        //pop all elements smaller than arr[i]
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        //mark the answer in nge array
        if(s.size()==0) nge[i]=-1;
        else nge[i]=s.top();

        //push the arr[i]
        s.push(arr[i]);

    }

    for(int i=0;i<n;i++){
        
        cout<<nge[i]<<" ";
    }
    cout<<endl;


}
