
//printing all subsequences using recursion 
// #include<bits/stdc++.h>
// using namespace std;

// void PrintF(int ind, vector<int>&ds, int arr[], int n){
//     if(ind == n){
//         for(auto it : ds){
//             cout<<it<<" ";
//         }
//         if(ds.size() ==0){
//             cout<<"()";
//         }
//         cout<<endl;
//         return ;
//     }
//     //take or pick
//     ds.push_back(arr[ind]);
//     PrintF(ind+1, ds, arr, n);
//     ds.pop_back();

//     //not take or not pick
//     PrintF(ind+1, ds, arr, n);
// }

// int main(){
//     int arr[] = {3,1,2};
//     int n = 3;
//     vector<int> ds;
//     PrintF(0,ds, arr, n);
// }

//printing subsequence with sum k 

// #include<bits/stdc++.h>
// using namespace std;

// void PrintS(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
//     if(ind == n){
//         if(s == sum ){

//             for(auto it :ds){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return ;
//     }
//     //take
//     ds.push_back(arr[ind]);
//     s+=arr[ind];
//     PrintS(ind+1, ds, s, sum, arr, n);
//     s-=arr[ind];
//     ds.pop_back();

//     //not take
//     PrintS(ind+1, ds, s, sum, arr, n );
// }

// int main(){
//     int arr[] = {1,2,1};
//     int n =3;
//     int sum =2;
//     vector<int> ds;
//     PrintS(0, ds, 0, sum, arr, n);

// }

//Word ladder i
#include<bits/stdc++.h>
using namespace std;

int WordLadder(string startword, string endword, vector<string>&wordlist){
    queue<pair<int>> q;
    q.push({startword, 1});
    unodered_set<string> st(wordlist.begin(), wordlist.end());
    st.erase(startword);

    while(!q.empty()){
        string word = q.front().first;
        int steps =   q.front().second;
    }
}

int main(){

}