
//Find the largest element of a array 
//apporach 1->sort the element in increase order then print(n-1) index
//apporach 2--> 
#include<bits/stdc++.h>
using namespace std;

// int findLargestElement(int arr[], int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i] > max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
// // int findLargestElement(int arr[], int n){
// //     sort(arr, arr+n);
// //     return arr[n-1];
// // }


// int main(){
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   max = findLargestElement(arr2, n);
//   cout << "The largest element in the array is: " << max<<endl;
//   return 0;
// }

//Ques 2: -Find the second largest element  in an array
// void getElements(int arr[], int n ){
//     if(n==0||n==1){
//         cout<<-1<<" "<<-1<<endl;
//     }
//     sort(arr, arr+n);
//     int small = arr[1];
//     int largest= arr[n-2]; 
//     cout<<"second smallest "<<small<<endl;
//     cout<<"second largest "<<largest<<endl;
// }

//better apporach 

// void getElements(int arr[], int n){
//     if(n==0 || n==1){
//         cout<<-1<<" "<<-1<<endl;
//     }
//     int small = INT_MAX, second_small = INT_MAX;
//     int large= INT_MIN, second_large = INT_MIN;

//     int i;
//     for(i=0;i<n;i++){
//         small=min(small, arr[i]);
//         large= max(large, arr[i]);
//     }
//     for(i=0;i<n;i++){
//         if(arr[i]<second_small && arr[i] !=small){
//             second_small=arr[i];
//         }
//         else if( arr[i] > second_large && arr[i] !=large){
//             second_large = arr[i];
//         }
//     }
//     cout <<second_large<<endl;
//     cout<<second_small<<endl;
// }
// int main(){
//     int arr[] ={14,1,2,3,4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     getElements(arr, n );
//     return 0;
// }

//Ques 3: check if an array is sorted or not 
// bool isSorted(int arr[], int n ){
//     for(int i=1;i<n;i++){
//         if(arr[i] <arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;
//   bool ans = isSorted(arr, n);
//   if (ans) cout << "True" << endl;
//   else cout << "False" << endl;
//   return 0;
// }

//remove duplicate element in a array ....>>>
//using hashmap
// int removeDuplicates(int arr[], int n ){
//     set<int> st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     int idx=0;
//     for(auto it :st){
//         arr[idx] =it;
//         idx++;
//     }
//     return idx;
// }

//using two pointer
// int removeDuplicates(int arr[], int n ){
//     int i=0;
//     for(int j =1;j<n;j++){
//         if(arr[i] !=arr[j]){
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return i+1;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }

//Ques 5: - Left Rotate the array by one ...>>>

// void solve(int arr[], int n){
//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[i-1]=arr[i];
//     }
//     temp[n-1] = arr[0];
//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }
//     cout<<endl;
// }
// void solve(int arr[], int n ){
//     int temp=arr[0];
//     for(int i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1] = temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n=5;
//     int arr[] = {1,2,3,4,5};
//     solve(arr, n);

// }

// print all subset of an array 
void printSubset(vector<int> & arr, vector<int> &ans, int i ){
    //base case
    if(i == arr.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include 
    ans.push_back(arr[i]);
    printSubset(arr, ans, i+1);
    ans.pop_back();
    //backtracking we remove the last element so that it remain as orginal subse
    printSubset(arr, ans, i+1);
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    printSubset(arr, ans, 0);
    return 0;
}
// store subset of leetcode problem 78

void getallsubset(vector<int>& nums, vector<int> &ans, int i,  vector<vector<int>>&allsubset){
    if(i == nums.size()){
        allsubset.push_back({ans});
        return ;
    }
    // include
    ans.push_back(nums[i]);
    getallsubset(nums, arr, i+1, allsubset);
    ans.pop_back();
    getallsubset(nums, arr, i+1, allsubset);
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubset;
        vector<int>ans;
        getallsubset(nums, ans, 0, allsubset);
        return allsubset;
}

// print all subsets having duplicates elements

void getallsubset(vector<int> &nums,vector<int>&ans, int i, vector<vector<int>> allsubset){
    if(i==nums.size()){
        allsubset.push_back(ans);
        return ;
    }
    //include
    ans.push_back(nums[i]);
    getallsubset(nums, ans, i+1, allsubset);
    ans.pop_back();
    //exclude
    int idx = i+1;
    while(idx <nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }
    getallsubset(nums, ans, idx, allsubset);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums){
    sort(nums.begin(), nums.end());
    vector<vector<int>> allsubset;
    vector<int> ans;
    getallsubset(nums, ans, 0, allsubset);

    return allsubset;
}