
            //selection sort
#include<bits/stdc++.h>
using namespace std;

//time complexity for selection sort is o(n^2) in all cases...


void selectionSort(int arr[], int n ){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

//time complexity for bubble sort is o(n^2) is worst and avg case but in best case it is o(n)

void bubbleSort(int arr[], int n ){

    for(int i=n-1; i>=0;i--){
        int didSwap=0; // if array is already sorted then directly break the statement
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

//time complexity for insertion sort is o(n^2) in worst and avg case and for best case it is o(n);

void insertionSort(int arr[], int n ){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // selectionSort(arr, n);

    // bubbleSort(arr, n );

    insertionSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

