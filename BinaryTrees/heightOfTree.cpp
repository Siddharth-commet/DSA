#include<vector>
#include<iostream>
using namespace std;

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
static int idx = -1;
Node* buildTree(vector<int>pre){
    idx++;
    if (pre[idx]==-1)return NULL;
    Node* root = new Node(pre[idx]); 
    root->left = buildTree(pre);
    root->right = buildTree(pre);    
    
    return root;
}



int findHeight(Node* root) {
    if (root == NULL) 
        return 0;
    return max(findHeight(root->left), findHeight(root->right)) + 1;
}

int main(){
    Node rootNode1(10);
    vector<int> pre = {7,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(pre);
    int height = findHeight(root);
    cout<<findHeight(root);


    return 0;
}