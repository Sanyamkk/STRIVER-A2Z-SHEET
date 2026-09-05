/*
given one tree and we have to find left view of that tree 

same as left view

like we have to find last elem of each level in that tree

easy q just level order traversal and only keep last elem of each level

*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node * left , *right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

int main(){
    Node * root=new Node(100);
    vector<int >ans;
    queue<Node * >q;
    q.push(root);
    while(!q.empty()){
        Node * temp;
        int size=q.size();
        for(int i=0;i<size;i++){
            temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        ans.push_back(temp->val);
    }
    // ans is storing left view of tree 

    return 0;
}