
                  // Array //
// #include<iostream>
// #include<array>
// using namespace std;

// int main(){
//     int x[3] = {1,2,3};

//     array<int ,4> a = {1,2,3,4};
//     int size = a.size();
//     for(int i =0;i<size;i++){
//         cout<<a[i]<<endl;
//     }

//     cout<<a.at(2)<<endl;
//     cout<<a.empty()<<endl;
//     cout<<a.front()<<endl; // first element 
//     cout<<a.back()<<endl;// last element 

// } 

                    //2 VECTOR //

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> v;

//     vector<int> a(5,1);

//     cout<<"Size-> "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Size-> "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<v.size()<<endl;
//     v.push_back(3);
//     cout<<"element at 2nd index" <<v.at(2)<<endl;
//     cout<<"font "<<v.front()<<endl;
//     cout<<"back "<<v.back()<<endl;

//     v.pop_back();

// }

                    //3 Deque

// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){

//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);

//     for(int i =0;i<d.size();i++){
//         cout<<d[i]<<" ";
//     }
//     cout<<endl;
//     // d.pop_back();
//     //  for(int i =0;i<d.size();i++){
//     //     cout<<d[i]<<" ";
//     // }
//     d.pop_front();
//     for(int i =0;i<d.size();i++){
//         cout<<d[i]<<" ";
//     }
// }


            //List

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<int> l;
    
//     list<int> n(5,100);
//     for(int i: n){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.push_back(1);
//     l.push_front(2);

//     for(int i : l){
//         cout<< i <<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"after earse: "<<endl;
//     for(int i:l){
//         cout<<i<<endl;
//     }
//     cout<<l.size()<<endl;
// }

                   //Stack

// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){

//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);

//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
// }

                    //QUeue

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     cout<<"First element "<<q.front()<<endl;
//     q.pop();
// }

                //priority queue........max and min heap 

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     //max heap
//     priority_queue<int> maxi;

//     //min heap
//     priority_queue<int, vector<int> , greater<int> >mini;

//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(0);

//     cout<<maxi.size()<<endl;

//     int n = maxi.size();
//     for(int i =0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(5);
//     mini.push(0);
//     mini.push(6);
//     mini.push(1);
//     mini.push(2);

//     int m = mini.size();
//     for(int i = 0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
// }

                         //SET ------->>>> store a quinue element agar 5 bar 5 hoga to ek hi baar show hoga


// #include<iostream>
// #include<bits/stdc++.h>
// #include<set>

// using namespace std;

// int main(){

//     set<int> s;

//     s.insert(2);
//     s.insert(2);
//     s.insert(4);
//     s.insert(1);
//     s.insert(5);

//     for(int i :s){
//         cout<<i<<endl;
//     }

//     s.erase(s.begin());
//     for(int i :s){
//         cout<<i<<endl;
//     }
//     cout<<s.count(-2)<<endl;

//     set<int>::iterator itr =s.find(2);

//     cout<<*itr<<endl;
// }

                        //MAP-------->>sorted order 

// #include<iostream>
// #include<map>

// using namespace std;

// int main(){

//     map<int, string> m;

//     // Inserting key-value pairs using square brackets
//     m[1] = "apple";
//     m[22] = "mango";
//     m[13] = "pea";

//     // Correcting the insert function with parentheses
//     m.insert({5, "bheem"});

//     // Iterating over the map and printing the keys
//     for(auto i : m){
//         cout << i.first <<" "<<i.second<< endl;
//     }

//     return 0;
// }

                    //Alogrithm....

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);


    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    string s ="abcd";
    reverse(s.begin(),s.end());
    cout<<"String-> "<<s<<endl;
    return 0;
}