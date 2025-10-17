#include<iostream>
using namespace std;

class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;

        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    void pop(){
        idx--;
        arr[1]=arr[idx]; // pop done here

        //rearrangement of heap
        int i = 1;
        while(true){
            int l = 2*i,r = 2*i + 1;

            if(l > idx-1) break;
            if(r > idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i=l;
                }
                break;
            }

            if(arr[l]<arr[r] && arr[i]>arr[l]){
                swap(arr[i],arr[l]);
                i = l;
            }
            else if(arr[r]<arr[l] && arr[i]>arr[r]){
                swap(arr[i],arr[r]);
                i = r;              
            }
            else break;
        }
    }
    int size(){
        return idx-1;
    }
};

int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(90);
    pq.push(80);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
}