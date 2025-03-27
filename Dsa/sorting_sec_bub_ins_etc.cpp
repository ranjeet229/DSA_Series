
//Bubble sort

// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[], int n ){
//     for(int i=1;i<n;i++){
//         // 1 to n-1;

//         for(int j=0; j < n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// void printArray(int arr[], int n ){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){

//     int arr[] ={6,9,4,1,2,3,7};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     cout<<"original array ";
//     printArray(arr,n);

//     bubbleSort(arr,n);

//     cout<<"Sorted array ";
//     printArray(arr,n);
//     return 0;
// }

//                   INSERTION SORT ////


#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n ){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n ){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {6, 9, 4, 1, 2, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    InsertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
