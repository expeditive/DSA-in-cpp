#include<iostream>
#include<climits>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL ;
        this->right=NULL;
    }
};
void displaytree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displaytree(root->right);
    displaytree(root->left);
}

int sumofnodes(Node* root){

    if(root ==NULL) return 0;
    return root->val + sumofnodes(root->left) + sumofnodes(root->right);
}

int sizeoftree(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeoftree(root->left) + sizeoftree(root->right);
}

int maxnode(Node* root){
    if(root == NULL) return INT_MIN;
    int lmax = maxnode(root->left);
    int rmax = maxnode(root->right);
    return max(root->val,max(lmax,rmax));
}

int main(){
   
     Node* a = new Node(1);//root node
     Node* b = new Node(2);
     Node* c = new Node(3);
     Node* d = new Node(4);
     Node* e = new Node(5);
     Node* f = new Node(6);
     Node* g = new Node(7);

     a->left= b;
     a->right=c;

     b->left = d;
     b->right = e ;

     c->left=f;
     c->right = g;

}