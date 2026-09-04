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

void solve(node * root){
    queue<node * >q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            node * temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }cout<<endl;
    }
}

node * solve1(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    node * temp=new node(x);

    temp->left=solve1();
    temp->right=solve1();
    return temp;

}

int main(){
    node * root=solve1();
    solve(root);
}