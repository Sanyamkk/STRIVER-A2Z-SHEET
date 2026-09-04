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

void inorder(node * root){
    if(!root)return ;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

    return ;
}

int main(){
    
}