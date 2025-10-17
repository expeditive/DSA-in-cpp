#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    
};

class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size =0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size ==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int sizes(){
        return size;
    }
    bool isempty(){
        if(size==0) return true;
        else return false;
    }
};

int main(){
    Queue q;
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