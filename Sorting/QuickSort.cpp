
#include <iostream>
using namespace std;
void QuickSort(int arr[], int low, int high) {
    if (low >= high) return; 

    int p = arr[low]; 
    int left = low, right = high;

    while (left <= right) {
        while (arr[left] < p) left++;  
        while (arr[right] > p) right--; 

        if (left <= right) {
            std::swap(arr[left], arr[right]); 
            left++;
            right--;
        }
    }

    QuickSort(arr, low, right);
    QuickSort(arr, left, high);
}


void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n - 1);

    std::cout << "Sorted array: ";
    PrintArray(arr, n);

    return 0;
}
