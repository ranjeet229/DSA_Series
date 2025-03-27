// #include<iostream>
// using namespace std;

// void printArray(int arr[] , int size){
//     cout<< "Printing the array: "<<endl;

//     for(int i=0;i<size;i++){
//         cout<< arr[i]<<" ";
//     }
//     cout<<"Printing Done: "<<endl;
// }

// int main(){
//     //declare
//     int number[15];

//     cout<< "Value at 0 index " << number[5] << endl;

//     //initialising an array
//     int arr[3]={5,7,11};

//     //access the element
//     cout<< arr[2] << endl;

//     int third[15]={2,3};
//     //print the element
//     int n = 15;
//     // printArray(third, 15);

//     int fourth[10]={0};
//     n = 10;
//     // printArray(fourth, 10);

//     //find the size of array
//     int fourthSize=sizeof(fourth)/sizeof(int);
//     cout<<"Size of fourth: "<<fourthSize<<endl;

//     char ch[5]={'a','b','c','d','f'};
//     cout<<ch[2]<<endl;

// }

//Finding max and min element in the array

// #include <iostream>
// #include <climits>
// using namespace std;

// int getMax(int num[], int n) {
//     int maxi = INT_MIN;
//     for(int i = 0; i < n; i++) {

//         maxi = max(maxi, num[i]); // this also give the max element  

//         // if(num[i] > max) {
//         //     max = num[i];
//         // }
//     }
//     return maxi;
// }

// int getMin(int num[], int n){

//     int mini = INT_MAX;
//     for(int i=0;i<n;i++){

//         mini= min(mini, num[i]);
//         // if(num[i]<min){
//         //     min = num[i];
//         // }
//     }
//     return mini;

// }

// int main() {
//     int size;
//     cin >> size;

//     int num[100];

//     // Taking input in array
//     for(int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     // Get the maximum value
//     cout << "The maximum value is: " << getMax(num, size) << endl;
//     cout << "The minimum value is: " << getMin(num, size) << endl;

//     return 0;
// }

//Scope...........>>> updating the value 

// #include<iostream>
// using namespace std;

// void update(int arr[] ,int n){

//     cout<<"Inside the function "<<endl;

//     //updating the array 
//     arr[0] = 120;

//     for(int i=0;i<3;i++){
//         cout << arr[i] << " ";
//     } cout <<endl;

//     cout<<"Going back to main function "<<endl;

// }


// int main(){

//     int arr[3]= {2,3,4};

//     update(arr, 3);

//     for(int i=0;i<3;i++){
//         cout << arr[i] << " ";
//     }
//     cout<<endl;

//     return 0;
// }

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

#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main(){

    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,3,6,5,-2};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}

