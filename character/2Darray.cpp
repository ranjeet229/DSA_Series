//create a 2D array......>>>

// #include<iostream>
// using namespace std;


// //searching the target element
// bool isPresent(int arr[][4], int target, int i , int j){

//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){

//     int arr[3][4];
//     //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

//                 //taking input--> it takes row wise input
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }

//                 //taking input -> col wise input
//     // for(int i=0;i<4;i++){
//     //     for(int j=0;j<3;j++){
//     //         cin>>arr[j][i];
//     //     }
//     // }

//     //print
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Enter the element to search "<<endl;
//     int target;
//     cin>>target;

//     if(isPresent(arr, target , 3, 4)){
//         cout<<"ELement found";
//     }else{
//         cout<<"ELement Not found";
//     }
//     return 0;
// }

                                                 //Finding the row wise sum 

// #include<iostream>
// using namespace std;

        //row sum
// void printSum(int arr[][3] , int i, int j){ 

//     for (int i=0; i<2;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }
// void printColsum(int arr[][3] , int i , int j){
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j =0;j<2;j++){
//             sum+=arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

// int largestRowSum(int arr[][3], int i , int j){
    
//     int maxi =INT8_MIN;
//     int rowInd=-1;

//     for(int i=0;i<2;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         if(sum > maxi){
//             maxi=sum;
//             rowInd=i;
//         }
//     }
//     cout<<"The maximum Row sum is "<<maxi<<endl;
//     return rowInd;
// }

// int largestCOlSum(int arr[][3], int i, int j){
//     int maxi=INT8_MIN;
//     int colIndex=-1;

//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<2;j++){
//             sum+=arr[j][i];
//         }
//         if(sum > maxi){
//             maxi=sum;
//             colIndex=i;
//         }
//     }
//     cout<<"The maximum col sum is "<<maxi<<endl;
//     return colIndex;
// }

// int main(){
//     int arr[2][3];


//     for (int i=0; i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }

//     //print
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // cout<<"The sum of row"<<endl;

//     // printSum(arr, 2 , 3);

//     cout<<"The sum of col"<<endl;
//     printColsum(arr , 2,3);

//     // int ans =largestRowSum(arr, 2,3);
//     // cout<<"max row is at index "<<ans<<endl;

//     int ans =largestCOlSum(arr, 2, 3);
//     cout<<"max col is at index "<<ans<<endl;

    
// }
                                //sprial question 

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//            cin>>arr[i][j];
//         }
//     }

//     //print
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//            cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

                // sort an array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[] ={5,2,3,4,6,10,1};

//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr, arr+n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int h=0, f=0, t=0, one=0;

//     switch(1){
//         case 1:
//             h = n/100;
//             n%=100;

//         case 2:
//             f=n/50;
//             n%=50;

//         case 3:
//             t=n/20;
//             n%=20;

//         case 4:
//             one = n;
//     }
//     cout<<h<<endl;
//     cout<<f<<endl;
//     cout<<t<<endl;
//     cout<<one<<endl;
// }

// #include<iostream>
// using namespace std;

// int countone1(int n){
//     int count=0;
//     while(n){
//         count+=n&1;
//         n>>=1;
//     }
//     return count;
// }
// int main(){
//     int n1;
//     int n2;
//     cin>>n1>>n2;

//     int count1=countone1(n1);
//     int count2=countone1(n2);

//     cout<<(count1+count2)<<endl;

//}

            // Binary search in array

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) { //right side 
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main() {
    int size;
    cin >> size;

    int arr[size]; 
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int index=binarySearch(arr, size, key);
    if(index !=-1){
        cout<<"Present at index : "<<index<<endl;
    }else{
        cout<<"not present"<<endl;
    }
    return 0;
}
