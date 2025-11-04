#include<iostream>
#include<vector>
#include<queue>
using namespace std;

static int idx = -1;
class Node{

    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};



Node* buildTree(vector<int>pre){
    idx++;
    if (pre[idx]==-1)return NULL;
    Node* root = new Node(pre[idx]); 
    root->left = buildTree(pre);
    root->right = buildTree(pre);    
    
    return root;
}

void preorderTrversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTrversal(root->left);
    preorderTrversal(root->right);
    
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while (q.size()>0)    
    {
        Node* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
        cout<<endl;
    }

    
    
}


void inOrderTraversal(Node* root){ //left,root,right
    if (root==NULL)
    {
        return;
    }
    
    inOrderTraversal(root->left);
    cout<<root->data;
    inOrderTraversal(root->right);
};

void postOrderTraversal(Node* root){ // left,right,root
    if (root==NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> pre = {7,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(pre);
    //cout<<root->data<<endl;
    //preorderTrversal(root);
    //inOrderTraversal(root);
    //postOrderTraversal(root);
    levelOrderTraversal(root);
    return 0;
}