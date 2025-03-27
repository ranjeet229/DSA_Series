// #include<iostream>
// using namespace std;

// #define PI 3.14 // define macros

// int main(){
//     int r=5;
//     double area=PI*r*r;

//     cout<<"area is "<<area<<endl;
// }

        //Global and Local variable in cpp 

// global variable can be access by any of the function 
// local variable can be access by only within the a particular function 
// #include<iostream>
// using namespace std;

// int score = 15; // here it is a global function 

// void a(int& i){
//     cout<< i<< endl;
//     b(i);
// }

// void b(int& i){
//     cout << i<< endl;
// }
// int main(){
//     int i=5;
//     a(i);

//     return 0;
// }

              //Inline function

#include<iostream>
using namespace std;

void func(int a, int b){
    a++;
    b++;
    cout<< a<< b<< endl;
}
int main(){

    int a=1, b=2;
    func(a,b);
}