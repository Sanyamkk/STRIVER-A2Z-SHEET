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

void postorder(node * root){
    if(!root)return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";

    return ;
}

int main(){
    
}