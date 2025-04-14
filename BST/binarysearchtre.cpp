
//Introduction to binary search tree........>>>>>

// in bst left node is always lesser than root node and right node is always greater than root node 


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

//Ques 1:-Search in binary search tree........>>>>>

TreeNode* searchBST(TreeNode* root, int val){
    while(root!=NULL && root->val!=val){
        root=val<root->val? root->left:root->right;
    }
    return root;
}

//Ques 2:- ceil in a binary search tree........>>>>> smallest value which is greater or equal to  key

int findCeil(TreeNode* node, int x){
    // Write your code here.
    int Ceil =-1;
    while(node!=NULL){
        if(node->val == x){
            Ceil=node->val;
            return Ceil;
        }
        if(x>node->val){
            node=node->right;
        }else{
            Ceil=node->val;
            node=node->left;
        }
    }
    return Ceil;
}

//Ques3:-Floor in a bst .....>>>greater value which is lesser than equal to key..

int floorBst(TreeNode* root, int key){

    int floor=-1;
    while(root){
        if(root->val == key){
            floor=root->val;
            return floor
        }
        if(key>root->val){
            floor=root->val;
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return floor;
}
// Ques 4:- Insert a given node in bst ...........>>>
TreeNode* insertbst(TreeNode* root, int val){
    if(root==NULL) return new TreeNode(val);
    TreeNode* curr=root;
    while(true){
        if(curr->val <=val){
            if(curr->right !=NULL){
                curr=curr->right;
            }else{
                curr->right = new TreeNode(val);
                break;
            }
        }else{
            if(curr->left !=NULL) {
                curr=curr->left;
            }else{
                curr->left=new TreeNode(val);
                break;
            }
        }
    }
    return root;
}

//Ques5:-  Delete a node in a bst........>>>>>

TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return nullptr;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else {
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        } else {

            TreeNode* successor = minValueNode(root->right);
            root->val = successor->val;
            root->right = deleteNode(root->right, successor->val);
        }
    }
    return root;
}

TreeNode* minValueNode(TreeNode* node) {
    while (node && node->left)
        node = node->left;
    return node;
}

//Ques 6:- 
