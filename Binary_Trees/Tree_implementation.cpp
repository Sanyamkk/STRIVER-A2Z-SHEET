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


node * solve(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    node * temp=new node(x);

    temp->left=solve();
    temp->right=solve();
    return temp;

}

int main(){
    node * root=solve();
}