
//Find the largest element of a array 
//apporach 1->sort the element in increase order then print(n-1) index
//apporach 2--> 
#include<bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}
// int findLargestElement(int arr[], int n){
//     sort(arr, arr+n);
//     return arr[n-1];
// }


int main(){
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}

//Ques 2: -Find the second largest element  