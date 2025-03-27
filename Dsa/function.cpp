// #include<iostream>
// using namespace std;

// int power(int a ,int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
//     int a, b;
//     cin>> a >> b;

//     int answer = power(a,b);
//     cout<<"answer is: "<< answer <<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// // 1 -> even 
// // 0 -> odd

// bool isEven(int a ){
//     //odd a%2!=0; ORR a&1 it also give odd
//     if(a&1){ // this is odd number 
//         return 0;
//     }
//     else{ //even
//         return 1;
//     }

// }

// int main(){
//     int n;
//     cin>> n;
//     if(isEven(n)){
//         cout<< "Number is even "<<endl;
//     }
//     else{
//         cout<<"Number is odd "<<endl;
//     }

// }

//finding ncr function ...............

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact =fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int num=factorial(n);

//     int denom=factorial(r)*factorial(n-r);

//     return num/denom;

// }

// int main(){
//     int n,r;
//     cin >> n >> r;

//     cout<<"answer is : "<<nCr(n,r)<<endl;
//     return 0;
// }

//counting number upto n';...........

// #include<iostream>
// using namespace std;

// //function signature
// void count(int n){
//     //function body
//     for(int i=1;i<=n;i++){
//         cout<< i <<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;

//     count(n); //function call
//     return 0;
// }

//number is PRIME OR Not ..................
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        //divide hogayah..not a prime no .

        if(n%i==0){
            return 0;
        }
    }
    //otherwise
    return 1;
}

int main(){
    int n;
    cin >>  n;

    if(isPrime(n)){
        cout<<"is a prime no "<< endl;
    }
    else{
        cout<<"is not a prime no "<< endl;
    }

    return 0;
}