    //Find largest element in an array 
    //Finding second largest element
    //Finding second smallest element
    //find smallest element

// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &arr , int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// int secondLargest(vector<int> &arr, int n ){
//     int largest=arr[0];
//     int slargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]> largest){
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest && arr[i] > slargest){
//             slargest=arr[i];
//         }
//     }
//     return slargest;
// }

// int smallestElement(vector<int> &arr, int n){
//     int smallest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     return smallest;
// }
// int secondSmallest(vector<int>&arr, int n ){
//     int smallest=arr[0];
//     int ssmallest=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             ssmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i]!=smallest && arr[i] < ssmallest){
//             ssmallest=arr[i];
//         }
//     }
//     return ssmallest;
// }



// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<largestElement(arr, n)<<endl;
//     cout<<secondLargest(arr, n)<<endl;

//     cout<<smallestElement(arr, n)<<endl;
//     cout<<secondSmallest(arr, n)<<endl;


// }

               // Left Rotate the array by d places ...

// #include<bits/stdc++.h>
// using namespace std;

// int RemoveDuplicate(int arr[], int n){
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i]!=arr[j]){
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     return i+1;
// }

//left rotate the array by d;

    //there is an optimal solution ...second method

// void leftRotate(int arr[], int n, int d){
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n); //reverse entire array...
// }

// void RightRotate(int arr[], int n , int d){
//     d=d%n;
//     reverse(arr, arr+n-d);
//     reverse(arr+n-d, arr+n);
//     reverse(arr, arr+n);
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     //leftRotate(arr, n,d);
//     RightRotate(arr, n, d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

            //place all zero at last in an array

// #include<bits/stdc++.h>
// using namespace std;

// int ZeroAtEnd(int arr[], int n ){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j++]=arr[i];
//         }
//     }
//     while(j<n){
//         arr[j++]=0;
//     }

// }

// union of two arrays..
//logic..
/*
  int n1=a.size();
        int n2=b.size();

        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(a[i]);
        }
        for(int i=0;i<n2;i++){
            st.insert(b[i]);
        }
        vector<int> temp;
        for(auto it: st){
            temp.push_back(it);
        }
        return temp;
*/


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ZeroAtEnd(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }

// }

            //Finding missing number in an array ...


// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[], int N) {
//     // Write your code here.
//     int sum=N*(N+1)/2;
//     int s2=0;
//     for(int i=0;i<N-1;i++){
//         s2+=arr[i];
//     }
//     return sum-s2;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<< missingNumber(arr, n);

// }

            //Finding maximum conscutive ones...

// #include<bits/stdc++.h>
// using namespace std;

// int maximumConscutive(int arr[], int n){
//     int maxi=0;
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             cnt++;
//             maxi=max(maxi,cnt);
//         }else{
//             cnt=0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<< maximumConscutive(arr, n );
// }

        //question find longestsubArraySum in

// #include<bits/stdc++.h>
// using namespace std;

// int longestSubarrayWithSumk(int arr[], int n,int k){
//     int left=0, right=0;
//     int sum=arr[0];
//     int maxLength=0;

//     while(right<n){
//         while(left<=right && sum>k){
//             sum-=arr[left];
//             left++;
//         }
//         if(sum==k){
//             maxLength=max(maxLength, right-left+1);
//         }
//         right++;
//         if(right<n){
//             sum+=arr[right];
//         }
//     }
//     return maxLength;
// }

            //ques 15:- 2 SUM ARRAY...

// int TwoSUM_ARRAY(int arr[],int n, int target){
//     int left=0, right=n-1;
//     sort(arr, arr+n);
//     while(left<right){
//         int sum=arr[left]+arr[right];
//         if(sum==target){
//             return 1;
//         }
//         else if(sum<target){
//             left++;
//         }else{
//             right--;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n, k;
//     cin >> n >> k;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     if (TwoSUM_ARRAY(arr, n, k)) {
//         cout << "Yes, there exists a pair with the given target sum." << endl;
//     } else {
//         cout << "No, there does not exist a pair with the given target sum." << endl;
//     }

// }

//ques-16 : sort an array of o's 1's and 2's
// Dutch national flag algorithm

// #include<bits/stdc++.h>
// using namespace std;

// void SortArray(int arr[], int n ){
//     int low=0, mid=0, high=n-1;
//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     SortArray(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
// }

//Ques 17:- Majority Element (>n/2 times)

// #include<bits/stdc++.h>
// using namespace std;

// int MajorityElement(int arr[], int n){
//     //using hashing

//     // map<int , int> mpp;
//     // for(int i=0;i<n;i++){
//     //     mpp[arr[i]]++;
//     // }
//     // for(auto it : mpp){
//     //     if(it.second> (n/2)){
//     //         return it.first;
//     //     }
//     // }
//     // return -1;

//     //using Moore's voting algorithm...
//     int cnt=0;
//     int el=0;
//     for(int i=0;i<n;i++){
//         if(cnt==0){
//             cnt=1;
//             el=arr[i];
//         }
//         else if(arr[i]==el){
//             cnt++;
//         }else{
//             cnt--;
//         }
//     }
//     int cnt1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==el){
//             cnt1++;
//         }
//     }
//     if(cnt1>n/2){
//         return el;
//     }
//     return -1;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<MajorityElement(arr, n)<<endl;
// }


//Ques -18:  Kadane's Algorithm, maximum subarray sum

// #include<bits/stdc++.h>
// using namespace std;

// int maximumSubarraySum(int arr[], int n ){
//     int sum=0, maxi=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(sum<0){
//             sum=0;
//         }
//         maxi=max(maxi, sum);
//     }
//     return maxi;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<maximumSubarraySum(arr,  n )<<endl;
// }

//ques 19: stock BUY and SELL find maximumProfit
// #include<bits/stdc++.h>
// using namespace std;

// int MaximumProfit(int arr[], int n){
//     int maxiProfit=0, mini=arr[0];
//     for(int i=1;i<n;i++){
//         int cost=arr[i]-mini;
//         maxiProfit=max(maxiProfit, cost);
//         mini=min(mini, arr[i]);
//     }
//     return maxiProfit;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<MaximumProfit(arr, n )<<endl;
// }

//ques 20:-Rearrange the array in alternation positive and negative items..
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> PositiveNegative(int arr[], int n) {
//     vector<int> ans(n, 0);
//     int posIndex = 0, negIndex = 1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0 && negIndex < n) {
//             ans[negIndex] = arr[i];
//             negIndex += 2;
//         } else if (arr[i] >= 0 && posIndex < n) {
//             ans[posIndex] = arr[i];
//             posIndex += 2;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> result = PositiveNegative(arr, n);

//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//ques 21:- Next permutation...


// #include<bits/stdc++.h>
// using namespace std;

// void NextPermuation(int arr[], int n){
//     next_permutation(arr, arr+n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     NextPermuation(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
// }

//ques 22:-Ladders in an Array problems...

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     pair<int, int> p={1,3};
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;
//     int n ;
//     cin>>n;
//     int arr[n];

// }

// ques 23:- Longest consecutive sequence

// #include<bits/stdc++.h>
// using namespace std;

// int LongestSequence(int arr[], int n){
//     if(n==0) return 0;
//     int longest=1;
//     unordered_set<int> st;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     for(auto it: st){
//         if(st.find(it-1)==st.end()){
//             int cnt=1;
//             int x=it;
//             while(st.find(x+1)!=st.end()){
//                 x=x+1;
//                 cnt=cnt+1;
//             }
//             longest=max(longest, cnt);
//         }
//     }
//     return longest;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<LongestSequence(arr, n)<<endl;

// }

//.....................XXXXXXXXXX Class Question ...................................//

//1. Write a program to find the maximum and minimum element in an array of integers.
// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &arr, int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// int smallestElement(vector<int> &arr, int n ){
//     int smallest =arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     return smallest;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<largestElement(arr, n)<<endl;
//     cout<<smallestElement(arr, n)<<endl;
// }


//2.Write a program to reverse the elements of an array.
//4. Secondlargest element in an array

// #include<bits/stdc++.h>
// using namespace std;

// void reverseArray(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }
// int secondLargestElement(int arr[], int n){
//     int largest=arr[0];
//     int sLargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             sLargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest && arr[i]>sLargest){
//             sLargest=arr[i];
//         }
//     }
//     return sLargest;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //reverseArray(arr, n);
//     for(int num:arr){
//         cout<<num<<" ";
//     }cout<<endl;
//     cout<<secondLargestElement(arr, n )<<endl;
// }

//3. rotate an array by right
// #include<bits/stdc++.h>
// using namespace std;

// void RotateArray(int arr[], int n, int d){
//     d=d%n;
//     reverse(arr, arr+n-d);
//     reverse(arr+n-d, arr+n);
//     reverse(arr, arr+n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     RotateArray(arr, n , d);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
// }
//5. Write a program to count how many times a specific element appears in an array.

// #include<bits/stdc++.h>
// using namespace std;

// int SpecificElement(int arr[], int n, int x){
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cnt++;
//         }
//     }
//     return cnt;
// }
// int main(){
//     int n,x;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>x;
//     cout<<SpecificElement(arr, n,x)<<endl;
// }

//6. Move of all zero in an array...

// #include<bits/stdc++.h>
// using namespace std;

// void moveZeroes(int arr[], int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j++]=arr[i];
//         }
//     }
//     while(j<n){
//         arr[j++]=0;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     moveZeroes(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }

// }

//find the missing number in an array of integers from 1 to n , where the array contains n-1 elements

// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[], int n){
//     int sum=n*(n+1)/2;
//     int s2=0;
//     for(int i=0;i<n;i++){
//         s2+=arr[i];
//     }
//     return sum-s2;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<missingNumber(arr, n)<<endl;
// }
//..............................XXXXXXXXXXXXXXXXXXX................................//

// Ques 24:-Rotate matrix by 90 degree

// void RotateMatrix(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
//     //reverse
//     for(int i=0;i<n;i++){
//         reverse(arr, arr+n);
//     }
// }

//Ques 25:- print the matrix in spiral manner leetcode: 

//ques28: -count subarrays with given sum...

// #include<bits/stdc++.h>
// using namespace std;

// int findAllSubarraywithsumk(int arr[], int n, int k){
//     map<int, int> mpp;
//     mpp[0]=1;
//     int presum=0, cnt=0;
//     for(int i=0; i<n;i++){
//         presum+=arr[i];
//         int remove=presum-k;
//         cnt+=mpp[remove];
//         mpp[presum]+=1;
//     }
//     return cnt;
// }

// int main(){
//     int n, k;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;
//     cout<<findAllSubarraywithsumk(arr, n, k)<<endl;
// }

                //step -4 Binary search...
//ques 1:-
// #include<bits/stdc++.h>
// using namespace std;

// int search(int arr[],int n, int k){
//     int l=0, r=n-1;
//     while(l<=r){
//         int mid=l+(r-l)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(k>arr[mid]){
//             l=mid+1;
//         }else{
//             r=mid-1;
//         }
//     }
//     return -1;
// }
// // ques 2:- find lowerbound of an array...
// int lowerbound(int arr[], int n, int k){
//  // int low=0, high=n-1;
//     // int ans=n;
//     // while(low<=high){
//     //     int mid=low+(high-low)/2;
//     //     if(arr[mid]>=k){
//     //         ans=mid;
//     //         high=mid-1;
//     //     }else{
//     //         low=mid+1;
//     //     }
//     // }
//     // return ans;
//     return lower_bound(arr, arr+n, k)-arr;
// }
// //ques 3: implement upper bound...
// int Upperbound(int arr[], int n, int k){
//     int low=0, high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>k){
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=low+1;
//         }
//     }
// }
// int main(){
//     int n, k;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;
//     //cout<<search(arr, n, k)<<endl;
//     cout<<lowerbound(arr, n, k)<<endl;
// }

//Ques 4: search insert Position ... is same as lowerbound code.

//ques 5:- floor and ceiling ...

// pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
// 	// Write your code here.
// 	 int low = 0, high = n - 1;
//     int ans1 = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (a[mid] <= x) {
//             ans1 = a[mid];
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     // Ceiling search
//     low = 0, high = n - 1;
//     int ans2 = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (a[mid] >= x) {
//             ans2 = a[mid];
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     return {ans1, ans2};

// }

//find duplicate in array using hasmap...

// #include<bits/stdc++.h>
// using namespace std;

// bool Duplicates(int a[], int n ,int k){
//     unordered_set<int> st;
//     for(int i=0; i<n;i++){
//         if(st.find(a[i])!=st.end())
//         return true;
//         st.insert(a[i]);
//         if(i>=k){
//             st.erase(a[i-k]);
//         }
//     }

// }

// #include<bits/stdc++.h>
// using namespace std;


// int peakIndexInMountainArray(int arr[], int n) {
//         int low=0, high=n-1;
//         while(low<high){
//             int mid=low+(high-low)/2;
//             if(arr[mid]<arr[mid+1]){
//                  low=mid+1;
//             }else{
//                 high=mid;
//             }
//         }
//         return low;
//     }
// int main(){
//    int n ;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    cout<<peakIndexInMountainArray(arr, n)<<endl;
// }

//ques: - Finding sqrt of a number using binary search 

// #include<bits/stdc++.h>
// using namespace std;

// int floorSqrt(int n){
//     int low=1,  high=n;
//     int ans=1;
        // if(n==0){
        //     return 0;
        // }
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(mid*mid<=n){
//             ans=mid;
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<floorSqrt(n)<<endl;
// }

//print all permutation combination of a pair in an array ...

// #include<bits/stdc++.h>
// using namespace std;

// void printPairs(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     printPairs(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//bubble sort
// #include<bits/stdc++.h>
// using namespace std;

// void bubbleSort(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//         int didswap=0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(didswap==0){
//             break;
//         }
//     }
// }
// void selectionSort(int arr[], int n){
//     for(int i=0;i<n-2;i++){
//         int mini=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[mini]){
//                 mini=j;
//             }
//         }
//         swap(arr[i], arr[mini]);
//     }
// }


// void insertionSort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         int j=i;
//         while(j>0&& arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    // bubbleSort(arr,  n);
//    // selectionSort(arr, n);
//    selectionSort(arr,n);
//     for(int num:arr){
//         cout<<num<<" ";
//     }
// }

//ques: - Merged two sorted array .....


// #include<bits/stdc++.h>
// using namespace std;

// void mergeTwoSorted(int arr1[], int arr2[], int n, int m){
//     int left=n-1;
//     int right=0;
//     while(left>=0&& right<m){
//         if(arr1[left]>arr2[right]){
//             swap(arr1[left], arr2[right]);
//             left--;
//             right ++;
//         }else{
//             break;
//         }
//     }
//     sort(arr1, arr1+n);
//     sort(arr2, arr2+m);
// }

// int main(){
//     int n, m;
//     cin>>n;
//     int arr1[n];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cin>>m;
//     int arr2[m];
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     mergeTwoSorted(arr1, arr2, n, m);
//     for(int a:arr1){
//         cout<<a<<" ";
//     }
//     for(int b:arr2){
//         cout<<b<<" ";
//     }
// }

//Ques:  search in rotated array ...

// #include<bits/stdc++.h>
// using namespace std;

// int search(int arr[],int n,  int target) {
//     int low=0, high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target>arr[mid]){
//             low=mid+1;
//         }else{
//             high=mid-1;
//         }
//     }
//     return -1;

// }

// int main(){
//     int n,k;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>k;
//     int ans=search(arr, n, k);
//     if(ans!=-1){
//         cout<<"Element at index: "<<ans<<endl;
//     }else{
//         cout<<"Element not found: "<<endl;
//     }


// }

//sort the arrays of 0's 1's and 2's

// #include<bits/stdc++.h>
// using namespace std;

// void sortArray(int arr[], int n){
//     int low=0, mid=0, high=n-1;
//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }else if(arr[mid]==1){
//             mid++;
//         }else if(arr[mid]==2){
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main(){

// }

