

// #include<bits/stdc++.h>
// using namespace std;

// //ques1 Print the maximum number of nodes on level i of a binary tree

// int countNode(int i){
//     return (1 <<(i-1));
// }


// int main(){
//     int level;
//     cin>>level;

//     int nodes=countNode(level);
//     cout<<nodes<<endl;
//     return 0;
// }
// Header Files
#include <iostream>
using namespace std;

// Function to calculate the secret code
int findSecretCode(int S, int N, int M) {
    const int MOD = 1000000007;

    // Ensure correct operator precedence using parentheses
    int ans = (((S ^ (N % 10)) ^ M) % MOD);
    return ans;
}

int main() {
    int S, N, M;

    // Input values for secretCode, firstKey, secondKey
    cin >> S >> N >> M;

    // Calculate and output the result
    int result = findSecretCode(S, N, M);
    cout << result << endl;

    return 0;
}
