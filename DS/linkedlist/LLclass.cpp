#include<iostream>
using namespace std;

class Node{ //user defined datatype
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

class LinkedList{ //user defined data structure

public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){ //constructor
        head = tail =NULL;
        size = 0;
    }

    void insert_at_end(int val){
        Node* temp = new Node(val);
        if(size = 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }


    void insert_at_head(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insert_at_idx(int val,int idx){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx == 0) insert_at_head(val);
        else if(idx == size) insert_at_end(val);
        else{
            Node* t = new Node(val);
            //traverse till that idx-1
            Node* temp = head;
            for(int i =1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
        }
    }


    int get_at_idx(int idx){
        if(idx==0) return head->val;

        else if(idx == size-1) return tail->val;

        else if(idx<0 || idx>=size) return -1;

        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void del_at_head(){
        if(size==0) {
            cout<<"List is empty"<<endl;
            return;
        }

        if(size==1) head=tail=NULL;

        if(size>=1){
            head = head->next;
        }
        size--;
    }

    void del_at_end(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void del_at_idx(int idx){
        if(size == 0){
            cout<<"List is empty"<<endl;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index"<<endl;
            return;
        } 
        else if(idx==0) return del_at_head();

        else if(idx == size-1) return del_at_end();

        else {
            Node* temp =  head;
            for(int i = 1;i<idx;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;

        }
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
};

int main(){
    LinkedList l;
    l.insert_at_head(10);
    l.insert_at_end(20);
    l.insert_at_head(9);
    l.display();
}