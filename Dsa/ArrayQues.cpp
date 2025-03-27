
//Find sum of all element in the array........>>>>

// #include<iostream>
// using namespace std;

// int arraySum(int num[],int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum+=num[i];
//     }
//     return sum;
// }

// int main(){

//     int size;
//     cin>>size;

//     int num[100];

//     for(int i=0;i<size;i++){
//         cin >> num[i];
//     }
//     cout << "sum of elements in the array is: "<< arraySum(num,size) << endl;
// }

//LINEAR SEARch....................>>>>>>>

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key){

// //traverse the array
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1; //true
//         }
//     }
//     return 0;


// }

// int main(){

//     int arr[10] = {5, 7 , -2, 10, 22, -2, 0, 5, 22,1};

//     // whether 1 is present int array or not
//     cout<<"Enter the element to search for: "<<endl;
//     int key;
//     cin>>key;

//     bool found=search(arr, 10 ,key);
//     if(found){
//         cout<< "key is present";
//     }else{
//         cout<<"not found";
//     }

//     return 0;
// }

//  REVERSE an array ................>>>>>>

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n){

//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n){

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[6]={1,4,0,5,-2,15};
//     int brr[5]={2,3,6,5,-2};

//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);

//     return 0;
// }

//REVERSE ALTERNATE elements .............>>>>


// #include<iostream>
// using namespace std;

// void swapAlternate(int arr[], int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// void printArray(int arr[], int n ){

//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[6]={2,6,5,4,3,-2};
//     int odd[5]={11,33,9,76,43};

//     swapAlternate(arr,6);
//     swapAlternate(odd,5);
//     printArray(arr,6);
//     printArray(odd,5);

// }

//find unique element in the array

// #include<iostream>
// using namespace std;

// int uniqueElement(int arr[], int size){
//     int ans =0;
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];           // use XOR ^ function for unique element
//     }
//     return ans;
// }

// void printArray(int arr[] , int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[5]={3,1,2,3,1};

//     printArray(arr, 5);
//     cout << uniqueElement(arr, 5);

//     return 0;
// }

// 

//DUPLICATE element in an array .................>>>>>


// #include<iostream>
// using namespace std;

// int duplicateElement(int arr[], int size){
//     int ans =0;

//     //XOR[N]
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     // XOR [1 to N-1]
//     for(int i=1;i<size;i++){
//         ans = ans^i;
//     }
//     return ans;
// }

// void printArray(int arr[] , int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[5]={3,1,2,4,3};

//     printArray(arr, 5);
//     cout << duplicateElement(arr, 5);

//     return 0;
// }

//Array Interesection ....... >>>>>>>


// #include<iostream>
// using namespace std;
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i =0,j=0;
// 	vector<int> ans;

// 	while(i<n && j<m){
// 		if(arr1[i] == arr2[j]){
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else if (arr1[i] < arr2[j]){
// 			i++;
// 		}else{
// 			j++;
// 		}
// 	}
// 	return ans ;
// }


// find sum of all element in array 


// #include<iostream>
// using namespace std;

// void reverse(int arr[] , int n){
//     int s=0;
//     int e=n-1;

//     while(s<=e){
//         swap(arr[s] ,arr[e]);
//         s++;
//         e--;
//     }
// }

// void swapAlternate(int arr[] , int n ){
//     for(int i=0;i<n;i+=2){
//         if(i+1<n){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"reverse array: "<<endl;
//     reverse(arr,n);
//     printArray(arr,n);

//     swapAlternate(arr , n);
//     printArray(arr, n);
// }


            // FInd the first and last element of an array 

// #include<iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     int mid= s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid] ==key){
//             ans=mid;
//             e=mid-1; // because we are finding the left occ
//         }
//         else if(arr[mid] > key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[], int n, int key){
//     int s=0, e=n-1;
//     int ans=-1;
//     int mid= s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid] ==key){
//             ans=mid;
//             s=mid+1 ;// because we are finding the left occ
//         }
//         else if(arr[mid] > key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int even[5]={1,2,3,3,5};

//     cout<<"first occ of 3 is "<<firstOcc(even ,5 ,3)<<endl;
//     cout<<"last occ of 3 is "<<lastOcc(even , 5, 3);

//     return 0;
// }


            //print the multiple duplicate value in an array 

#include <iostream>
#include <algorithm>  // For sorting
using namespace std;

void printDuplicateElements(int arr[], int size) {
    // Sort the array
    sort(arr, arr + size);

    bool foundDuplicate = false;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {

            if (!foundDuplicate || arr[i] != arr[i - 1]) {
                cout << "Duplicate element: " << arr[i] << endl;
                foundDuplicate = true;
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found." << endl;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {3, 1, 2, 4, 3, 4};

    printArray(arr, 6);
    printDuplicateElements(arr, 6);

    return 0;
}
