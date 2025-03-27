// Finding Factorial

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     //bsae case
//     if(n==0){
//         return 1;
//     }else{
//         return n*factorial(n-1);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);

//     cout<<ans<<endl;
// }

                // finding 2^N

// #include<iostream>
// using namespace std;

// int power(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }else{
//         return 2*power(n-1);
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans =power(n);
//     cout<<ans<<endl;
// }

            // print counting 

// #include<iostream>
// using namespace std;

// void print(int n){
//     //base case
//     if(n==0){
//         return ;
//     }
//     print(n-1); //1 2 3 4 5 output
//     cout<<n<<endl;
//     // print(n-1); // 5 4 3 2 1
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(n);
// }

            // Fibonnaci series 

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     int ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }



// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Fibonacci of " << n << " is " << fib(n) << endl;
//     return 0;
// }

                // count ways until you reach nth position 

// #include<iostream>
// using namespace std;

// int countways(int n){

//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return -1;
//     }
//     int ans=countways(n-1)+countways(n-2);
//     return ans;
// }
// int main(){

//}

            //saydigit 

// #include<iostream>
// using namespace std;

// void sayDigit(int n, string arr[]){
//     //base case
//     if(n==0){
//         return ;
//     }
//     int digit=n%10;
//     n=n/10;

//     sayDigit(n, arr);

//     cout<<arr[digit]<<" ";

// }

// int main(){

//     string arr[11]={"zero","one","two","three","four","five","six","severn",
//     "eight","nine","ten"};

//     int n;
//     cin>>n;

//     cout<<endl;
//     sayDigit(n,arr);
//     cout<<endl;
// }

                        // sort an array usign recuirsion 

// #include<iostream>
// using namespace std;

// bool isSorted(int arr[], int n){
//     //base case
//     if(n==0|| n==1){
//         return true;
//     }

//     if(arr[0]> arr[1]){
//         return false;
//     }else{
//         bool ans = isSorted(arr+1, n-1);
//         return ans;
//     }
// }

// int main(){

//     int arr[]={1,2,3,4,5,6};
//     int size=6;

//     int a=isSorted(arr, size);
//     if(a){
//         cout<<"array sorted"<<endl;
//     }else{
//         cout<<"not sorted "<<endl;
//     }
// }

    //print sum of arrary

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,3,5,1,6};
//     int size =5;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
// }

        // print sum using recursion 

// #include<iostream>
// using namespace std;

// int getSum(int *arr, int size){
//     // base case 
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }
//     int remaining=getSum(arr+1, size-1);
//     int sum=arr[0]+remaining;
//     return sum;
// }

// int main(){
//     int arr[5]={8,7,6,4,5};
//     int size=5;

//     int sum = getSum(arr, size);
//     cout<<sum<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool issorted(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     if (issorted(arr, n)) {
//         cout << "Sorted" << endl;
//     } else {
//         cout << "Not Sorted" << endl;
//     }

//     return 0;
// }
