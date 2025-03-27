// Binary Search

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){

//     int start =0;
//     int end  = size -1;

//     //(start+end)/2; or 
//     int mid= start+(end - start)/2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }

//         if(key > arr[mid]){ // go to right side ...
//             start =mid +1;
//         }else{
//             end  = mid-1;
//         }
//         mid = start+(end - start)/2;
//     }
//     return -1;
// }

// int main(){

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,14,16};

//     int evenIndex = binarySearch(even,6,8);
//     cout<<"Index is " << evenIndex<<endl;

//     int oddIndex = binarySearch(odd,5,20);
//     cout<<"Index is " << oddIndex <<endl;
//     return 0;

// }

// Questions 
// Finding the first and last occurrence of the array


// #include<iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     int mid = s + (e - s) / 2;
//     while (s <= e) {
//         if (arr[mid] == key) {
//             ans = mid;
//             e = mid - 1; //  first occurrence
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }

//     return ans;
// }

// int lastOcc(int arr[], int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     int mid = s + (e - s) / 2;
//     while (s <= e) {

//         if (arr[mid] == key) {
//             ans = mid;
//             s = mid + 1; //last occurrence
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }

//     return ans;
// }

// int main() {
//     int even[7] = {1, 2, 2, 3, 3, 3, 5};

//     cout << "First Occurrence of 3 is " << firstOcc(even, 7, 3) << endl;
//     cout << "Last Occurrence of 3 is " << lastOcc(even, 7, 3) << endl;

//     return 0;
// }

                    // find the minimum pivot index in array 

// #include<iostream>
// using namespace std;

// int getpivot(int arr[] , int n ){
//     int s=0;
//     int e=n-1;
//     int mid= s+(e-s)/2;

//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s=mid+1;
//         }else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[6] ={2, 8,10,17,1,3};
//     cout<<"Pivot is "<<getpivot(arr ,6)<<endl;
// }

            // find square root of number using B.s;



// #include<iostream>
// using namespace std;

// int binarySearch(int n) {
//     int s = 0;
//     int e = n;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         int sq = mid * mid;

//         if (sq == n) {
//             return mid; // Perfect square root found
//         }
//         if (sq < n) {
//             ans = mid; // Store the potential answer (floor value)
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans; // Return the floor of the square root if exact root not found
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << binarySearch(n) << endl;

//     return 0;
// }

//Find the peak element  in a array ......>>>>>

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int n){
    int l=0, r=n-1;

    while(l<r){
        int mid=l+(r-l)/2;
        if(arr[mid]>arr[mid+1]){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    return l;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findPeakElement(arr,n)<<endl;

}