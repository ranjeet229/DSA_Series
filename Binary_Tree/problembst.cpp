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

//ques 3:- diameter of a binary tree.....>>>>>

int diameterbst(TreeNode* root){
    int diameter=0;
    findMax(root, diameter);
    return diameter;
}
int findMax(TreeNode* root, int &diameter){
    if(root==NULL) return 0;

    int l=findMax(root->left, diameter);
    int r=findMax(root->right, diameter);
    diameter=max(diameter, l+r);

    return 1+max(l,r);
}

//ques 4:-Maximum Path sum in binary tree....>>>>>

int maxPathSum(TreeNode* root){
    int maxi=0;
    maxPath(root, maxi);
    return maxi;
}
int maxPath(TreeNode* root, int &maxi){
    if(root==NULL) return 0;

    int l=max(0, maxPath(root->left, maxi));
    int r=max(0,maxPath(root->right, maxi));

    maxi=max(maxi, l+r+root->val);
    return max(l,r)+root->val;
}

//ques 5:-Check if two trees are indentical or not in bst .....>>>>>


