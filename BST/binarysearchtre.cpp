
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

//Ques 6:- Kth  and kth largest  element in a binary tree......>>>

class Solution {
private:
    void reverseInorder(TreeNode* node, int& counter, int k, int& kLargest) {
        if (!node || counter >= k) return;

        // Traverse right subtree
        reverseInorder(node->right, counter, k, kLargest);

        // Increment counter after
        // visiting right subtree
        counter++;

        // Check if current node
        // is the Kth largest
        if (counter == k) {
            kLargest = node->val;
            return;
        }

        // Traverse left subtree if
        // Kth largest is not found yet
        reverseInorder(node->left, counter, k, kLargest);
    }

    // Helper function to perform inorder
    // traversal to find Kth smallest element
    void inorder(TreeNode* node, int& counter, int k, int& kSmallest) {
        if (!node || counter >= k) return;
        inorder(node->left, counter, k, kSmallest);
        counter++;
        if (counter == k) {
            kSmallest = node->val;
            return;
        }

        inorder(node->right, counter, k, kSmallest);
    }

public:
    pair<int, int> findKth(TreeNode* root, int k) {
        int kSmallest = INT_MIN, kLargest = INT_MIN;
        int counter = 0;
        inorder(root, counter, k, kSmallest);
        counter = 0;
        reverseInorder(root, counter, k, kLargest);

        return make_pair(kSmallest, kLargest);
    }
};

void printInOrder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    // Creating a BST
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);

    cout << "Binary Search Tree: "<< endl;
    printInOrder(root);
    cout << endl;
    Solution solution;
    int k = 3;
    cout << "k: "<< k <<endl;
    pair<int, int> kthElements = solution.findKth(root, k);

    cout << "Kth smallest element: " << kthElements.first << endl;
    cout << "Kth largest element: " << kthElements.second << endl;

    return 0;
}

//ques7: - check if a tree is a bst or bt .........>>>
bool isValidBST(TreeNode* root) {
    return validate(root, LONG_MIN, LONG_MAX);
}
bool validate(TreeNode* node, long minVal, long maxVal) {
    if (node == nullptr) return true;
    if (node->val <= minVal || node->val >= maxVal) return false;
    return validate(node->left, minVal, node->val) &&
           validate(node->right, node->val, maxVal);
}

//Ques 8:- LCA(Lowest Common Ancesstor) in a bst...........>>>>
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root) return nullptr;
   if (p->val < root->val && q->val < root->val) {
       return lowestCommonAncestor(root->left, p, q);
   }
   if (p->val > root->val && q->val > root->val) {
       return lowestCommonAncestor(root->right, p, q);
   }
   return root;
}

//Ques 9:-construct BST from preorder traversal............>>>>>>>

TreeNode* bstFromPreorder(vector<int>& A){
    int i=0;
    return build(A,i,INT_MAX);
}
TreeNode* build(vector<int>&A, int &i, int bound){
    if(i==A.size() || A[i]>bound) return NULL;
    TreeNode* root=new TreeNode(A[i++]);
    root->left=build(A,i, root->val);
    root->right=build(A, i, bound);
    return root;
}

//Ques 10:- Inorder successor/Predecessor in bst ..........>>>>>

TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p){
    TreeNode* successor=NULL;

    while(!root){
        if(p->val >=root->val){
            root=root->right;
        }else{
            successor=root;
            root=root->left;
        }
    }
    return successor;
}

//Ques 11:- BST Iterator..........>>>>> merge 2 bst........>>>>>

