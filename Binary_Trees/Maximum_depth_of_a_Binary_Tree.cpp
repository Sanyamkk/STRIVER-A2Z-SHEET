/* 
we have to find  height of tree 

so we use resursive approch we just ask our left and right node hey whats your height 
and taking max out of them +1 to that and pass to our parent or as ans 

every node do same ask their children but what if node dont have children so simply
return 0 if we are not in a valid not or NULL node 

for time compl  we are traveling in whole tree so TC(N) where N is no of node in tree 

and for Space comp  O(1)  we are not using any extra space 

cpp code (just function not whole tree)
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{

    int val;
    Node * left , *right;
};

int solve(Node * root)
{
    if(!root )
    {
        return 0;
    }
    return 1+max( solve(root->left) , solve(root->right));
}

int main(){
    Node * root;
    int ans=solve(root);
}



