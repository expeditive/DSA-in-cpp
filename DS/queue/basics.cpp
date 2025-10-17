#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void displayque(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverseque(queue<int> &q){
    stack<int> s;
    int n= q.size();
    for(int i =1;i<=n;i++){ //empty the queue into stack
        int x = q.front();
        s.push(x);
        q.pop();
    }

    for(int i =1;i<=n;i++){ //empty the stack into queue
        int x = s.top();
        q.push(x);
        s.pop();
    }
}

//deleting element at even position
void delatevenpos(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(3);
    q.push(4);
    q.push(7);
    q.push(5);

    displayque(q);
    reverseque(q);
    displayque(q);

}
