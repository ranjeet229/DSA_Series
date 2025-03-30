//Problem in bst

#include<iostream>
using namespace std;


struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

//Ques 1:- Maximum height of a binary tree

int maxDepth(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return max(l,r)+1;
}

//ques 2:- Check for Balanced binary tree.....>>>>

bool isBalanced(TreeNode* root){
    return check(root) != -1;
}
int check(TreeNode* root){
    if(root==NULL) return 0;

    int l=check(root->left);
    if(l==-1) return -1;

    int r=check(root->right);
    if(r==-1) return -1;

    if(abs(l-r)>1) return -1;
    return max(l,r)+1;
}
