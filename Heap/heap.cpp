// #include <bits/stdc++.h>
// using namespace std;

// class HeapNode {
// public:
//     int data;
//     HeapNode* left;
//     HeapNode* right;
//     HeapNode* parent;

//     HeapNode(int x) {
//         data = x;
//         left = right = parent = nullptr;
//     }
// };

// class Heap {
//     HeapNode* root;
//     queue<HeapNode*> que; 

// public:
//     Heap() {
//         root = nullptr;
//     }

//     void insert(int x) {
//         HeapNode* temp = new HeapNode(x);

//         if (!root) {
//             root = temp;
//             que.push(temp);
//             return;
//         }

//         HeapNode* front = que.front();

//         if (!front->left) {
//             front->left = temp;
//             temp->parent = front;
//         } else if (!front->right) {
//             front->right = temp;
//             temp->parent = front;
//             que.pop();
//         }

//         que.push(temp);
//     }

//     void inorderTraversal(HeapNode* node) {
//         if (node) {
//             inorderTraversal(node->left);
//             cout << node->data << " ";
//             inorderTraversal(node->right);
//         }
//     }

//     void display() {
//         inorderTraversal(root);
//         cout << endl;
//     }
// };

// int main() {
//     Heap h;
//     h.insert(10);
//     h.insert(20);
//     h.insert(30);
//     h.insert(40);
//     h.insert(50);

//     h.display(); // Should print the elements in a sorted order

//     return 0;
// }
// this is recur permute.....>>>

// void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
//     if(ds.size()==nums.size()){
//         ans.push_back(ds);
//         return ;
//     }
//     for(int i=0;i<nums.size();i++){
//         if(!freq[i]){
//             ds.push_back(nums[i]);
//             freq[i]=1;
//             recurPermute(ds, nums, ans , freq);
//             freq[i]=0;
//             ds.pop_back();
//         }
//     }
// }
// vector<vector<int>> Permute(vector<int>& nums){
//     vector<vector<int>> ans;
//     vector<int> ds;
//     int freq[nums.size()]={0};
//     for(int i=0;i<nums.size();i++){
//         freq[i]=0;
//     }
//     recurPermute(ds, nums, ans, freq);
//     return ans;
// }