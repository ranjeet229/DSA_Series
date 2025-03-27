

        //Linear search... using recursion 


// #include<iostream>
// using namespace std;

// bool LinarSerach(int *arr, int size, int key ){
//     //base case
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     bool remaing = LinarSerach(arr+1, size-1, key);
//     return remaing;
// }
// int main(){
//     int arr[]={3,4,1,5,6};
//     int size=5;
//     int key=4 ;

//     bool ans =LinarSerach(arr, size, key);
//     if(ans){
//         cout<<"key found "<<endl;
//     }else{
//         cout<<"key not found "<<endl;
//     }
// }

        //Binary search...using recursion 


// #include<iostream>
// using namespace std;

// bool binarySearch(int *arr, int s,int e, int key ){
//     //base case 

//     //element not found 
//     if(s>e){
//         return false;
//     }
//     int mid=s+(e-s)/2;
//     //element found 
//     if(arr[mid]==key){
//         return true;
//     }

//     if(arr[mid]<key){
//         return binarySearch(arr, mid+1, e, key);
//     }else{
//         return binarySearch(arr,s, mid-1, key);
//     }
// }

// int main(){
//     int arr[]={3,5,1,2,6};
//     int size= 5;
//     int key=16;
//     int s=0;
//     int e=size-1;
//     bool ans= binarySearch(arr,s,e,key);
//     if(ans){
//         cout<<"key found"<<endl;
//     }else{
//         cout<<"key not found"<<endl;
//     }
// }

            //Reverse the string using recursion 

// #include<iostream>
// using namespace std;

// void reverse(string& str, int i, int j){
//     //base case
//     if(i>j){
//         return ;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;

//     reverse(str,i,j);
// }
// int main(){
//     string name="ranjeet";

//     reverse(name,0,name.length()-1);

//     cout<<name<<endl;

//     return 0;
// }

            //check palindrome using recursion 

// #include <iostream>
// using namespace std;

// bool checkplaindrome(string &str, int i, int j) {
//     // Base case
//     if (i >= j) {
//         return true;
//     }
//     if (str[i] != str[j]) {
//         return false;
//     }
//     // Recursive call
//     return checkplaindrome(str, i + 1, j - 1);
// }

// int main() {
//     string name = "noon";
//     cout << endl;

//     bool ispalindrome = checkplaindrome(name, 0, name.length() - 1);
//     if (ispalindrome) {
//         cout << "is a palindrome" << endl;
//     } else {
//         cout << "is not a palindrome" << endl;
//     }
// }


            //find power of a^b using recursion 

// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     //base case
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }
//     //recersive call
//     int ans=power(a, b/2);
//     if(b%2==0){
//         return ans*ans;
//     }else{
//         return a*ans*ans;
//     }
// }

// int main(){
//     int a, b;
//     cin>>a>>b;

//     int ans=power(a, b);
//     cout<<"answer is "<<ans<<endl;

//     return 0;
// }

                //print of sum of n number using recursion 

        //using parametrised way
// #include<bits/stdc++.h>
// using namespace std;

// int fun(int i, int sum){
//     if(i<1){
//         cout<<sum<<" ";
//         return 0;
//     }
//     fun(i-1, sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     fun(n,0);
// }

        //using functional way...

// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);

// }

        //factorial of n 

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n ;
    cin>>n;
    cout<<fact(n);
}