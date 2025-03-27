
                // prime no 
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){ // if reminder is zero 
//             return 0;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is a prime no "<<endl;
//     }else{
//         cout<<"is not a prime no"<<endl;
//     }
//     return 0;
// }

            //Sieve of eratostheres to count no of prime no 

// #include <iostream>
// #include <vector>
// using namespace std;

// int sieveOfEratosthenes(int n) {
//     int count=0;
//     vector<bool> prime(n + 1, true); // n+1 means indcex  check the value from 0 to n element 

//     prime[0]=prime[1]=false;
    
//     for(int i=2;i<n;i++){ // traverse the value up to n 
//         if(prime[i]){
//             count++;
//             for(int j=2*i;j<n;j=j+i){ // checking the table 
//                 prime[j]=0;
//             }
//         }
//     }
//     for(int i=2;i<n;i++){
//         if(prime[i]){
//             cout<< i<<" ";
//         }
//     }
//     cout<<endl;
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;

//     int primecount = sieveOfEratosthenes(n);
//     cout<<"Total number of prime numbers up to "<<n<<primecount<<endl;

//     return 0;
// }

            // finding the GCD/HCF 
        //approach gcd(a,b)=gcd(a-b,b) or gcd(a%b,b)

// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
    
//     if(a==0){
//         return b;
//     }
//     if(b==0){
//         return a;
//     }

//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }else{
//             b=b-a;
//         }
//     }
//     return a;
// }


// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b : "<<endl;
//     cin>>a>>b;

//     int ans=gcd(a,b);
//     cout<<"the gcd of "<<a<<" and "<<b<<" is "<<ans<<endl;
// }

            // Find the missing value in an array

#include<iostream>
using namespace std;

int missingNumber(int arr[] , int n){
    int sum_n =n*(n+1)/2;

    int sum_arr=0;
    for(int i=0;i<n-1;i++){
        sum_arr+=arr[i];
    }
    return sum_n-sum_arr;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int ans=missingNumber(arr,n);
    cout<<ans<<endl;
};