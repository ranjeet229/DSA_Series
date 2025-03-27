// count how many 1 appears in an array of any numbers appears in an array


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //taking array input
//     int n; //size of an array
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //preCalculation...
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }

//     int q; //here q represent how many query we take
//     cin>>q;
//     while(q--){
//         int num; // num represent how many 1 appears , how many 2 appears like that ...
//         cin>>num;
//         //fetching number...
//         cout<<hash[num]<<" ";
//     }
//     return 0;
// }


                                    //character hashing finding how many times a appears , b appears like that
//for lowercase characters... for uppercase we just need to take hash array to be hash[s[i]-'A']++; and in fetching cout<<hash[c-'A']

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //taking string input...
//     string s;
//     cin>>s;
//     //preComputation

//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;     //assign the character value to the index ex at 0th index 'a' as['a' - 'a'] is placed similary at 1th 'b' is placed as['b' - 'a']
//     }

//     //taking query
//     int q;
//     cin>>q;
//     while(q--){ //iterating over the string array...
//         char c;
//         cin>>c;
//         //fetching string
//         cout<<hash[c-'a']<<endl;  //to get the indx
//     }
//     return 0;
// }

                //for all characters that is including lowercase case and uppercase ...

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //taking string input...
//     string s;
//     cin>>s;
//     //preComputation

//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;     //assign the character value to the index ex at 0th index 'a' as['a' - 'a'] is placed similary at 1th 'b' is placed as['b' - 'a']
//     }

//     //taking query
//     int q;
//     cin>>q;
//     while(q--){ //iterating over the string array...
//         char c;
//         cin>>c;
//         //fetching string
//         cout<<hash[c]<<endl;  //to get the indx
//     }
//     return 0;
// }


                                        //Mapping  map and unordered map...
/*storing and fetching number using map it takes less memory than array hashing also in map elements stored in sorted form but in
 unodered map elemets are stored in unsorted way ... */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-Compute

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //iterate in the map
    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
 
    //query
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetching
        cout<<mpp[num]<<endl;
    }
    return 0;
}