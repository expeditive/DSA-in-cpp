#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b==5){
            cout<<"QUEUE IS FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"QUEUE IS EMPTY"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout<<"QUEUE IS EMPTY"<<endl;
            return 0;
        }
        else{
            return arr[f];
    
        }
    }    

    int size(){
        return b-f;
    }
    bool isempty(){
        if(b-f==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q(5);
    q.push(6);
    q.push(9);
    q.push(88);
    q.push(66);
    q.push(50);
    q.display();
    q.push(90);
    q.pop();
    q.display();
}