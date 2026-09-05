/*

given 2 trees and we have to check either they are same or not 

the position and value of every node must be same 

for every node its value its left subtree and its right subtree must be same 


*/

bool solve(Node * p , Node * q){
    if(!p && !q)return true   // nothing exist in both trees
    if((!p && q) || (!q && p))return false   // something exist in one tree but not in other tree 

    if(p->val!=q->val) return false;   // nodes value is not same 

    return solve(p->left , q->right )&& solve(p->right , q->right);  // their left ans right sub trees must be same 
    
}