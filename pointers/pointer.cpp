

            // basic of pointers 


// #include<iostream>
// using namespace std;

// int main(){
//     // pointer to int is created , and pointing to some garbage address
//    // int *p=0;
//     /*
//     int i=5;

//    // int *p=&i;
//    int *p=0;
//     p=&i;
//     cout<<*p<<endl;

//     */
//    int num=5;
//    int a =num;
//    cout<<"before "<<num<<endl;
//    a++;
//    cout<<"a afer "<<num<<endl;

//    int *p=&num;
//    cout<<"before "<<num<<endl;
//    (*p)++;
//    cout<<"after "<<num<<endl;

//     //copying a pointer  
//    int *q=p;
//    cout<<p<<" - "<<q<<endl; //address of p and q same
//    cout<<*p<<" - "<<*q<<endl;// value of p and q are same 

//    //important concept

//    int i=3;
//    int *t=&i;
//    (*t)++;
//    cout<<*t<<endl;
//    cout<<"before t "<<t<<endl;
//    t=t+1;
//    cout<<"after t "<<t<<endl; 
//    return 0;

// }

//#include<iostream>
//using namespace std;

//int main(){
    // float f=10.5;
    // float p=2.5;
    // float *ptr=&f;
    // (*ptr)++;
    // *ptr =p;
    // cout<<*ptr<<" "<<f<<" "<<p;

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout  << a <<" "<< b << endl;

    // int *ptr=0;
    // int a=10;
    // *ptr=a;
    // cout<<a<<endl;

    // char ch='a';
    // char *ptr=&ch;
    // ch++;
    // cout<<*ptr<<endl;
//}

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[]= {2,5,7,1,6,11,1,1,0,0};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }