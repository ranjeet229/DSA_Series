// #include <iostream>
// using namespace std;

// // Function to compute GCD using the Euclidean algorithm
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int gcd(int num1,int num2){
    while(num2!=0){
        int temp=num2;
        num2=num1%num2;
        num1=temp;

    }return num1;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"gcd of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2);
}