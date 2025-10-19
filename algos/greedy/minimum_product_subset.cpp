#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int minproduct(vector<int> &arr){
    int negnum = 0 , zeros = 0 ,posnum = 0,posnumprod = 1,negnumprod=1,maxneg=INT_MIN;
    for(int i =0;i<arr.size();i++){
        if(arr[i]< 0){
            negnum++;
            negnumprod *= arr[i];
            maxneg = max(maxneg,arr[i]);
        }
        if(arr[i]==0) zeros++;
        if(arr[i]>0) {
            posnum++;
            posnumprod *= arr[i];
        }
    }
    if(negnum == 0){
        if(zeros>0) return 0;
        else{
            auto it = min_element(arr.begin(),arr.end());
            return *it;
        }
    }
    else{
        if(negnum % 2 == 0){
            //even negatives
            return(negnumprod / maxneg) * posnumprod;
        }
        else{
            //odd
            return negnumprod * posnumprod;
        }
    }
}


int main(){
    vector<int> arr = { -2, -3, 1, 4, -2};
    cout<<minproduct(arr)<<endl;
    return 0;
}