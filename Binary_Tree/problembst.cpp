//Problem in bst

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

//Ques 0 :- Level order traversal.......>>>>

void levelOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        cout << temp->val << " ";

        if (temp->left != nullptr) q.push(temp->left);
        if (temp->right != nullptr) q.push(temp->right);
    }
}

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

bool isSameTree(TreeNode* p, TreeNode* q){
    if(p==NULL || q==NULL) return (p==q);

    return (p->val == q->val)
            && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right);
}

//Ques 6:- zig zag traversal of binary tree.....>>>>>

vector<vector<int>> zigZagLevelOrder(TreeNode* root){
    vector<vector<int>> res;
    if(root==NULL) return res;

    queue<TreeNode*> q;
    q.push(root);
    bool flag=true;

    while(!q.empty()){
        int n=q.size();
        vector<int> row(n);
        for(int i=0;i<n;i++){
            TreeNode* node= q.front();
            q.pop();

            int index=(flag)? i : (n-1-i);
            row[index] =node->val;

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        flag=!flag;
        res.push_back(row);
    }
    return res;
}

//Ques 7:- Boundary Traversal of binary tree......>>>>>>>

//Ques 8:- vetical order traversal of binary tree.......>>>>>

vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<TreeNode*, pair<int, int>>> q;
    q.push({root, {0, 0}});

    while (!q.empty()) {
        auto p = q.front(); q.pop();
        TreeNode* node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->val);
        if (node->left)
            q.push({node->left, {x - 1, y + 1}});
        if (node->right)
            q.push({node->right, {x + 1, y + 1}});
    }
    vector<vector<int>> result;
    for (auto& p : nodes) {
        vector<int> col;
        for (auto& q : p.second) {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        result.push_back(col);
    }
    return result;
}

// Helper function
TreeNode* buildTree(vector<int> vals) {
    if (vals.empty() || vals[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(vals[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < vals.size()) {
        TreeNode* node = q.front(); q.pop();
        if (vals[i] != -1) {
            node->left = new TreeNode(vals[i]);
            q.push(node->left);
        }
        i++;
        if (i < vals.size() && vals[i] != -1) {
            node->right = new TreeNode(vals[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

//Ques 9:-Top View of binary tree.......>>>

vector<int> TopView(TreeNode* root){
   vector<int> ans;
   if(root==NULL) return ans;
    map<int, int> mpp;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode* node=it.first;
        int line=it.second;
        if(mpp.find(line) == mpp.end()){
            mpp[line] = node->val;
        }
        if(node->left !=NULL){
            q.push({node->left, line-1});
        }
        if(node->right !=NULL){
            q.push({node->right, line +1});
        }
    }
    for(auto it : mpp){
        ans.push_back(it.second);
    }
    return ans;
}

//Ques 10:-Bottom view of binary tree.......>>>

vector<int> bottomView(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;
    map<int, int> mpp;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode* node = it.first;
        int line = it.second;
        mpp[line] = node->val;

        if(node->left !=NULL){
            q.push({node->left, line-1});
        }
        if(node->right !=NULL){
            q.push({node->right, line+1});
        }
    }
    for(auto it :mpp){
        ans.push_back(it.second);
    }
    return ans;
}

//Ques 11:- Print Root to Node Path in Binary Tree

bool getPath(TreeNode* root , vector<int> &arr, int x){
    if(root==NULL){
        return false;
    }
    arr.push_back(root->val);
    if(root->val == x){
        return true;
    }
    if(getPath(root->left, arr, x) || getPath(root->right, arr, x)){
        return false;
    }
    arr.pop_back();
    return false;
}
vector<int>solve(TreeNode* A, int B){
    vector<int> arr;
    if(A==NULL){
        return arr;
    }
    getPath(A, arr, B);
    return arr;
}

//Ques 12:- LCA(Lowest Common Ancestor) in Binary Tree ........>>>>
TreeNode* LCA(TreeNode*root, TreeNode* p, TreeNode* q){

    if(root == NULL || root==p || root==q){
        return root;
    }
    TreeNode* left= LCA(root->left, p,q);
    TreeNode* right=LCA(root->right, p, q);

    //result;
    if(left==NULL){
        return right;
    }else if(right == NULL){
        return left;
    }
    else{
        return root;
    }
}


//Ques 13:-Maximum width of binary tree.......>>>>
int widthOfBinaryTree(TreeNode* root){
    if(!root) return 0;
    int ans=0;
    queue<pair<TreeNode* , int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int size = q.size();
        int mmin=q.front().second;
        int first, last;
        for(int i=0;i<size;i++){
            int cur_id=q.front().second-mmin;
            TreeNode* node=q.front().first;
            q.pop();
            if(i==0) first= cur_id;
            if(i==size-1) last=cur_id;
            if(node->left){
                q.push({node->left, cur_id*2+1});
            }
            if(node->right){
                q.push({node->right, cur_id*2+2});
            }
        }
        ans=max(ans, last-first+1);
    }
    return ans;
}

//Ques 14 :- Children Sum Property...........>>>>>

//Ques 15:- Print all the Nodes at a distance of K in Binary Tree......>>>>

class Solution {
    void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent_track,TreeNode* target){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* current=q.front();
            q.pop();
            if(current->left){
                parent_track[current->left]=current;
                q.push(current->left);
            }
                if(current->right){
                    parent_track[current->right]=current;
                    q.push(current->right);
                }
            }
        }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent_track;
        markParents(root,parent_track,target);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int curr_level=0;
        while(!q.empty()){
            int size=q.size();
            if(curr_level++==k)break;
            for(int i=0;i<size;i++){
                TreeNode* current=q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left]=true;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right]=true;
                }
                if(parent_track[current] && !visited[parent_track[current]]){
                    q.push(parent_track[current]);
                    visited[parent_track[current]]=true;
                }
            }
        }
        vector<int>result;
        while(!q.empty()){
            TreeNode* current=q.front();
            q.pop();
            result.push_back(current->val);
        }
        return result;
    }
};

//Ques 16:- Minimum time taken to BURN the binary tree from a Node / leaf node....>>>>

int minTime(TreeNode* root, int target)
{
    // Your code goes here
    TreeNode* start;
    unordered_map<TreeNode*, TreeNode*> parent;

    queue<TreeNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        int sz = Q.size();
        while(sz--)
        {
            TreeNode* cur = Q.front();
            Q.pop();
            if(cur->val == target)
            start = cur;
            if(cur->left)
            {
                Q.push(cur->left);
                parent[cur->left] = cur;
            }
            if(cur->right)
            {
                Q.push(cur->right);
                parent[cur->right] = cur;
            }
        }
    }

    Q.push(start);

    set<int> burned;

    int t = -1;

    while(!Q.empty())
    {
        int sz = Q.size();
        while(sz--)
        {
            TreeNode* cur = Q.front();
            Q.pop();
            burned.insert(cur->val);
            if(cur != root and burned.find(parent[cur]->val) == burned.end())
                Q.push(parent[cur]);
            if(cur->left and burned.find(cur->left->val) == burned.end())
                Q.push(cur->left);
            if(cur->right and burned.find(cur->right->val) == burned.end())
                Q.push(cur->right);
        }
        t++;
    }
    return t;
}

//17:- Count total Nodes in a COMPLETE Binary Tree....>>>>>
int countNodes(TreeNode* root){
    if(root==NULL) return 0;

    int lh=findHeightLeft(root);
    int rh=findHeightRight(root);

    if(lh==rh) return (1<<lh) -1;

    return 1+ countNodes(root->left) + countNodes(root->right);
}
int findHeightLeft(TreeNode* node){
    int height=0;
    while(node){
        height++;
        node=node->left;
    }
    return height;
}
int findHeightRight(TreeNode* node){
    int height =0;
    while(node){
        height++;
        node=node->right;
    }
    return height;
}
//Ques 17:- Unique BInary tree Requirement like can you convert preorder, inorder or postorder to binary tree

bool isPOssible(int a, int b){
    if((a==2 && (b==1 || b==3)) || (b==2 && (a==1 || a==3))){
        return true;
    }
    return false;
}

//Ques18:- Construct binary tree from inorder and preorder.........>>>>

    unordered_map<int, int> inorderMap;
    int preorderIndex = 0;
    TreeNode* build(vector<int>& preorder,int left, int right) {
        if (left > right) return nullptr;

        int rootVal = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int index = inorderMap[rootVal];

        root->left = build(preorder, left, index - 1);
        root->right = build(preorder, index + 1, right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }
        return build(preorder, 0, inorder.size() - 1);
    }

