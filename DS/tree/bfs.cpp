#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left =  NULL; 
        this->right = NULL;
    }
};
int levelsoftree( Node* root){
    if(root == NULL) return 0;
    return 1 + max(levelsoftree(root->left),levelsoftree(root->right));
}

void nthlevel(Node* root, int curr ,int level){
    if(root ==NULL) return;
    if(curr ==  level) cout<<root->val<<" ";
    nthlevel(root->left, curr+1, level);
    nthlevel(root->right, curr+1 , level);
}

void levelorder(Node* root){
    int n = levelsoftree(root);
    for(int i=0;i<n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}

void BFS(Node* root){
    queue<Node*> q;
    q.push(root);

    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right !=NULL) q.push(temp->right);
    }
    cout<<endl;
}