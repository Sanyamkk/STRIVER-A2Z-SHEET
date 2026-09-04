#include<bits/stdc++.h>
using namespace std;

struct node {
    int val ;
    node * left , *right;

    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void preorder(node * root){
    if(!root)return ;
    
    preorder(root->left);
    cout<<root->val<<" ";
    preorder(root->right);

    return ;
}

int main(){
    
}