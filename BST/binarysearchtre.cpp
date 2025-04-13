
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
//Insert a given node in bst ...........>>>
