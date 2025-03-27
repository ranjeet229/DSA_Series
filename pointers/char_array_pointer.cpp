// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5]={1,2,3,4,5};
//     char ch[6]="abcde"; //ch array mein string ke sath ek null value bhi size leta hai 

//     cout<<arr<<endl;
//     cout<<ch<<endl;

    //int array and char array ke liye cout function differently implemented hai 
    //arr -> address store at first index 
    //ch-> it give whole string that present in array

//     char *c=&ch[0];
//     cout<<c<<endl; //matlab pointer ka koi role nahi hai char mein // ye bad way hai intilization ka 

//     char temp='z';
//     char *p=&temp;
//     cout<<p<<endl;
// }


            //pointer as a function 

#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"inside "<<p<<endl;

    *p=*p+1;
}

int getsum(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int value=5;
    int *p=&value;

    //print(n)
    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;

    int arr[6] ={1,2,3,4,5,8};
    // cout<<"sum is "<<getsum(arr,5)<<endl;
    cout<<"sum is "<<getsum(arr+3 ,3)<<endl;
}