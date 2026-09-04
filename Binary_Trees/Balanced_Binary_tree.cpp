/*
 we have to check either the tree is balanced or not 
 for that we have to check for any node the diff of height of left and right subtree does not exceed 1 

 so its basically finding height for each node and then checking either we are in safe zone or not 

*/

#include<bits/stdc++.h>
using namespace std;

bool ans=true;
struct Node {
    int val;
    Node * left , * right;
};

int solve(Node * root){
    if(!root)return 0;
    int l=solve(root->left);
    int r=solve(root->right);
    if(abs(l-r)>1)ans=false;

    return 1+max(l ,r );
}

int main(){
    Node * root;
    solve(root);
    cout<<ans<<endl;
    return 0;
}