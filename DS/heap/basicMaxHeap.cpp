#include<iostream>
#include<queue>
using namespace std;
int main(){

    //max heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top()<<endl; //10
    pq.pop(); //10 removed
    cout<<pq.top()<<endl;// now top is 8

    //min heap
    priority_queue< int , vector<int> ,greater<int> > mpq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<mpq.top()<<endl; //-6
}