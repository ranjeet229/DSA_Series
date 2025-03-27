
                        // Reverse an array

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v){
//     int s =0;
//     int e=v.size()-1;

//     while(s<=e){
//         swap(v[s] , v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v){
//     for(int i=0;i<v.size() ;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){

//     vector<int> v;

//     v.push_back(11);
//     v.push_back(5);
//     v.push_back(12);
//     v.push_back(6);
//     v.push_back(3);

//     vector<int> ans = reverse(v);
//     print(ans);

//     return 0;
// }

            //Merge two sorted array

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr1[], int n ,int arr2[] , int m, int arr3[] ){

//       int i =0 , j =0;
//       int k =0;
//       while(i<n && j<m){
//         if(arr1[i] < arr2[j]){
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }else{
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//       }
//       while(i<n){
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//       }
//       while(j<m){
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//       }
// }

// void print(int ans[] , int n){
//     for(int i =0;i<n;i++){
//         cout<<ans[i] << " ";
//     }
//     cout<<endl;
// }
// int main(){

//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] ={2,4,6};

//     int arr3[8] ={0};
//     merge(arr1 , 5 , arr2 , 3, arr3);

//     print(arr3 , 8);
// }

                                //Rotate an array .............//

// #include<iostream>
// #include<vector>

// using namespace std;

// void rotate(vector<int> & arr , int k){

//   vector<int> temp(arr.size());
//   for(int i =0;i<arr.size();i++){
//     temp[(i+k)%arr.size()] = arr[i];
//   }
//   arr =temp;
// }
// int main(){

//   vector<int> arr ={2,3,4,5};

//   rotate(arr,2);

//   for(int i =0;i<arr.size() ;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }

              //Sum of two array

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//   int arr1[] ={2,3,4,5,6};
//   int arr2[] ={5};

//   int n =sizeof(arr1)/sizeof(arr2[0]); //n-> represent size of array

//   int sumarr[n];

//   for(int i =0;i<n;i++){
//     sumarr[i]=arr1[i]+arr2[0];
//   }

//   for(int i =0;i<n;i++){
//     cout<<sumarr[i]<<" ";
//   }
//   cout<<endl;


// }



//merge the two array 

#include<iostream>
using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m , int arr3[]){
  int i =0,j=0,k=0;

  while(i<n &&j<m){
    if(arr1[i] < arr2[j]){
      arr3[k] =arr1[i];
      k++;
      i++;
    }else{
      arr3[k] = arr2[j];
      k++;
      j++;
    }
  }
  while(i<n){
    arr3[k] = arr1[i];
    k++;
    i++;
  }
  while(j<m){
    arr3[k] = arr2[j];
    k++;
    j++;
  }
}

void print(int arr3[] , int n ){
  for(int i=0;i<n;i++){
    cout<<arr3[i] <<" ";
  }
  cout<<endl;
}

int main(){

  int arr1[5]={1,3,4,5,6};
  int arr2[3]={2,8,9};

  int arr3[8]={0};

  merge(arr1 , 5 ,arr2 , 3 ,arr3);
  print(arr3 ,8);
}
