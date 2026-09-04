/*
given one tree and we have to find maximum sum of any path within tree 

so we are going to use logic as we use in diameter one 

we go to each node and ask what if we take this node alone , with its left part , with its right part 
like that
*/

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node * left , *right;

    Node(int val){
        this->val;
        this->left=NULL;
        this->right=NULL;
    }
};

int maxi=INT_MIN;
int solve(Node * root){
    if(!root)return 0;
    int l=solve(root->left);
    int r=solve(root->right);
    maxi=max({maxi , root->val+max({(int)0 , l , r})});
    return max({(int )0 , root->val , root->val+l , root->val+r});
}

int main(){
    Node * root=new Node(21);
    solve(root);
    return 0;
}