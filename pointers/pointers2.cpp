// #include<iostream>
// using namespace std;

// int main(){

   // int arr[10]={23, 122, 41, 67};
    // cout<<"address of first memory block is "<<arr<<endl;
    // cout<<"address of first memory block is "<<&arr[0]<<endl; // both arr and &arr[0] are same 

    // cout<<"value at 0th index "<<arr[0]<<endl;

    // cout<<"4th  " << *arr<<endl;
    // cout<<"5th  "<<*arr+1<<endl;
    // cout<<"6th  "<<*(arr+1)<<endl;
    // cout<<"7th  "<<(*arr)+1<<endl; // 7ht and 5th are same 
    // cout<<"8th  "<<arr[2]<<endl;
    // cout<<"9th  "<<*(arr+2)<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;

    // int *ptr =&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // int *p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

//     int arr[10];

//     int *ptr=&arr[0];
//     cout<<ptr<<endl;
//     ptr=ptr+1;
//     cout<<ptr<<endl;
// }


            // double pointers 


// #include<iostream>
// using namespace std;

// void update(int **p2){
//     // p=p+1; //no change in any value 

//     //*p2= *p2+1; //change hoga 

//     **p2=**p2+1;
// }

// int main(){
//     int i=5;
//     int*p=&i;
//     int**p2=&p;

    // cout<<"address of p is : "<<p<<endl;
    // //cout<<&p<<endl;
    // cout<<*p2<<endl;

    // //printing value of i threee way 
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl; 

//     cout<<"before "<<i<<endl;
//     cout<<"before "<<p<<endl;
//     cout<<"before "<<p2<<endl;

//     update(p2);
//     cout<<"after "<<i<<endl;
//     cout<<"after "<<p<<endl;
//     cout<<"after "<<p2<<endl;

//     return 0;
// }

                        // Question on double pointers 
#include<iostream>
using namespace std;

int main(){
    int first=8;
    int second=11;
    int *third = &second;
    first =*third;
    *third =*third+2;
    cout<<first<<" "<<second<<endl;
    return 0;
}