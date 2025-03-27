
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
   int val;
    TreeNode *left;
    TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//preoder traversal.....RECURSIVELY....>>>>>>
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    preorderHelper(root, res);
    return res;
}
void preorderHelper(TreeNode* node , vector<int> &res){
    if(node==NULL){
        return;
    }
    res.push_back(node->val);
    preorderHelper(node->left,res);
    preorderHelper(node->right,res);
}

//POSTODER traversal......RECURSIVELY.....>>>>>>

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    postorderHelper(root, ans);
    return ans;

}
void postorderHelper(TreeNode* root , vector<int> &ans){
    if(root==NULL) return ;

    postorderHelper(root->left, ans);
    postorderHelper(root->right, ans);
    ans.push_back(root->val);
}

//INODER TRAVERSAL........>>>.RECURSIVELY.........>>>>

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    inorderHelper(root, ans);
    return ans;
 }
 void inorderHelper(TreeNode* root, vector<int> &ans){
     if(root==NULL) return ;
     inorderHelper(root->left, ans);
     ans.push_back(root->val);
     inorderHelper(root->right, ans);
 }

