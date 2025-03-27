
//Ques 1: - Asign cookies.....>>>>>

#include<bits/stdc++.h>
using namespace std;

//Ques1:- assign cookies...>>
int findContentChildren(int greed[], int size[], int n, int m){
    int l=0, r=0;
    sort(greed, greed+n);
    sort(size, size+m);

    while(l<m && r<n){
        if(greed[r] <=size[l]){
            r++;
        }
        l++;
    }
    return r;
}

//ques: 2=

int main(){
    int n;
    cin>>n;
    int greed[n];
    for(int i=0;i<n;i++){
        cin>>greed[i];
    }
    int m;
    cin>>m;
    int size[m];
    for(int i=0;i<m;i++){
        cin>>size[i];
    }
    cout<<findContentChildren(greed, size, n, m)<<endl;

}