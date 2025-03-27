// #include<iostream>
// using namespace std;



// void update1(int n){
//     n++; // n update nahi hua b/c ye copy bana diya hai call by value hua hai 
// }

// void update2(int& n){
//     n++; // create a refrence variable so that we can update the value of n 
// }

// int main(){
      
//     /*
//     int i=5;
//     //create a ref variable
//     int &j=i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     */
//    int n=5;
//    cout<<"before "<<n<<endl;
//    update2(n);
//    cout<<"after "<<n<<endl;
// }


            //heap memory

// #include<iostream>
// using namespace std;

// int main(){
//     char ch='q';

//     cout<<sizeof(ch)<<endl;
//     char*c=&ch;
//     cout<<sizeof(c)<<endl;

//     return 0;
// }


                //Dynamic array in 2D array

// 1 for same output

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int** arr= new int*[n]; // creating 2d array in dynamic form 

//     //creation a 2d array
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }

//     //taking input
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;

//     //print output
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }



// for different row nad column 

#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;


    //creation a 2d array
    int** arr= new int*[row]; // creating 2d array in dynamic form 

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //print output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //relasing array
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    delete []arr;

    return 0;
}
