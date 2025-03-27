

#include<bits/stdc++.h>
using namespace std;

//ques1 Print the maximum number of nodes on level i of a binary tree

int countNode(int i){
    return (1 <<(i-1));
}


int main(){
    int level;
    cin>>level;

    int nodes=countNode(level);
    cout<<nodes<<endl;
    return 0;
}