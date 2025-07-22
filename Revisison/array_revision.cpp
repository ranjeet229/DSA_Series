
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

void getElements(int arr[], int n){
    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;
    }
    int small = INT_MAX, second_small = INT_MAX;
    int large= INT_MIN, second_large = INT_MIN;

    int i;
    for(i=0;i<n;i++){
        small=min(small, arr[i]);
        large= max(large, arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<second_small && arr[i] !=small){
            second_small=arr[i];
        }
        else if( arr[i] > second_large && arr[i] !=large){
            second_large = arr[i];
        }
    }
    cout <<second_large<<endl;
    cout<<second_small<<endl;
}
int main(){
    int arr[] ={14,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n );
    return 0;
}