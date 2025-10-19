/*minimum cost to cut a board into squares

A baord of length M , width N , break this baord into M*N squares
such that the cost of beaking is minimum. cutting cost for each edge will be given 
for the beoard in two arrays X[],Y[], in short we need to choose such a sequence of 
cutting such that the cost is miniized , Return theminimized cost */
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

//custom comparatir
bool cmp(int x, int y){
    return x>y;
}

ll minCostToBreakGrid(int n,int m, vector<ll> &X,vector<ll> &Y){ //X = vertical , Y = horizontal
    sort(X.begin(),X.end(),cmp);
    sort(Y.begin(),Y.end(),cmp);
    int horicut = 1;
    int vertcut = 1;
    int h =0, v = 0;
    ll ans = 0;
    while(h<Y.size(), v<X.size()){
        if(X[v] > Y[h]){
            ans += X[v]*vertcut;
            horicut++;

            vertcut++;
        }
        else{
            ans += Y[h]*horicut;
            vertcut++;

            horicut++;
        }
    }
    while(h<X.size()){
        ans += X[v]*vertcut;
        horicut++;

        vertcut++;        
    }
    while(v<Y.size()){
        ans += Y[h]*horicut;
        vertcut++;

        horicut++;     
    }
    return ans;
}

int main(){
    int M = 6;
    int N = 4;
    vector<ll> X={2,1,3,1,4};
    vector<ll> Y={4,1,2};
    cout<<minCostToBreakGrid(M,N,X,Y)<<endl;
}