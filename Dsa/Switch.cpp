// #include<iostream>
// using namespace std;

// int main(){
//     int num = 2;
//     cout << endl;

//     switch( num ){
//         case 1 : cout << "First" <<endl;
//                 break;
//         case 2 : cout << "Second" <<endl;
//                 break;
//         default : cout <<"This is default case " << endl;

//     }
//     cout << endl;

//     return 0;
// }

//calculator

#include<iostream>
using namespace std;

int main(){

    int a,b ;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout <<"Enter the value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the op which you want ot perform: "<<endl;

    cin>>op;

    switch(op){

        case '+': cout << a+b <<endl;
                break;

        case '-': cout << a-b << endl;
                    break;

        case '*': cout << a*b << endl;
                    break;

        case '/': cout << a/b << endl;
                    break;

        default : cout<< " Please enter the valid operation" << endl;
    }
    cout <<endl;
    return 0;

}