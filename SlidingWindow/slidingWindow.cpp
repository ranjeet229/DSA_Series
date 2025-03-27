
//Ques 1: Longest Substring without reapeating characters....>>>>

// #include<bits/stdc++.h>
// using namespace std;

// int lengthOfLongSubstring(string s){
//     int hash[256];
//     fill(begin(hash), end(hash),-1);

//     int n=s.size();
//     int l=0,r=0,maxLen=0;

//     while(r<n){
//         if(hash[s[r]]!=-1){
//             if(hash[s[r]]>=l){
//                 l=hash[s[r]]+1;
//             }
//         }
//         int len=r-l+1;
//         maxLen=max(len, maxLen);
//         hash[s[r]]=r;
//         r++;
//     }
//     return maxLen;
// }

// int main(){
//     string s;
//     cin>>s;
//     cout<<lengthOfLongSubstring(s);
// }

//Ques 2: Max consecutive ones lll ...............>>>>>

#include<bits/stdc++.h>
using namespace std;

// using brute force tc:- O(n^2) sc:- O(1).....>>>>>
int longestOnes_BruteForce(int arr[], int k, int n){
    int maxlen=0;
    for(int i=0;i<n;i++){
        int zero=0;

        for(int j=i;j<n;j++){
            if(arr[j]==0){
                zero++;
            }
            if(zero<=k){
                int len=j-i+1;
                maxlen=max(maxlen, len);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}

//Optimal soln:- using sliding windown two pointer l and r
//tc:-nearly O(n) and sc:- O(1);

int longestOnes_optimalSol(int arr[], int k , int n){
    int l=0, r=0, maxlen=0, zero=0;
    while(r<n){
        if(arr[r]==0){
            zero++;
        }
        while(zero>k){
            if(arr[l]==0){
                zero--;
            }
            l++;
        }
            int len=r-l+1;
            maxlen=max(maxlen, len);
            r++;
    }
    return maxlen;
}

// Ques 3: Fruits into basket............>>>>>>
int totalFruits(int arr[], int n){
    int l=0, r=0, maxlen=0,k=2;
    unordered_map<int, int> mpp;
    while(r<n){
        mpp[arr[r]]++;
        while(mpp.size() > k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0){
                mpp.erase(mpp[l]);
            }
            l++;
        }
        int len=r-l+1;
        maxlen=max(maxlen, len);
        r++;
    }
    return maxlen;
}

//ques 4:- Longest Reapeating character replacement...>>>

int characterReplacement(string s, int k){
    int l=0, r=0, maxlen=0, maxf=0;
    unordered_map<char, int> mpp;

    while(r<s.length()){
        mpp[s[r]]++;
        maxf=max(maxf, mpp[s[r]]);

        while((r-l+1)-maxf >k){
            mpp[s[l]]--;
            l++;
        }
        maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}

// ques 5: Binary subarray with sum which is equal to k........>>>>

int binarysum(int arr[], int n, int goal){

    if(goal < 0) return 0;
    int l=0, r=0, sum=0, cnt=0;
    while(r<n){
        sum+=arr[r];

        while( sum > goal){
            sum-=arr[l];
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
}

int numSubarraysWithSum(int arr[], int n, int goal){
    return binarysum(arr,n,goal) - binarysum(arr, n, goal-1);
}

//ques 6:-> Count number of nice subarray...>>>
int cntNice(int arr[], int n, int k){
    if(k<0) return 0;
    int l=0, r=0, sum=0, cnt=0;
    while(r<n){
        sum+=(arr[r] %2);
        while(sum > k){
            sum-=(arr[l] %2);
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
}

int numberOfSubarrays(int arr[], int n, int k ){
    return cntNice(arr, n, k) - cntNice(arr, n, k-1);
}

// ques 7:- Number of substring containing all three characters......>>>>
int numberOFSubstrings(string s){
    unordered_map<char, int> cnt;
    int l=0, res=0, n=s.size();
    for(int i=0;i<n;i++){
        cnt[s[i]]++;

        while(cnt['a']>0 && cnt['b'] > 0 && cnt['c']>0){
            res+=(n-i);
            cnt[s[l]]--;
            l++;
        }
    }
    return res;
}

//ques 8:- Maximum point you can obtain from cards....>>>>
int maxScore(int arr[],int n , int k){
    int lsum=0, rsum=0, maxsum=0;
    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }
    maxsum=lsum;
    int rindx=n-1;
    for(int i=k-1;i>=0;i--){
        lsum=lsum-arr[i];
        rsum=rsum+arr[rindx];
        rindx--;

        maxsum=max(maxsum, lsum+rsum);
    }
    return maxsum;
}

//Ques 9: Subarray with k different integers ...>>>

int kdistinct(vector<int> & nums, int k){
    if(k==0) return 0;
    int n=nums.size();
    unordered_map<int, int> mpp;
    int l=0, r=0, cnt=0;
    while(r<n){
        mpp[nums[r]]++;

        while(mpp.size() > k){
            mpp[nums[l]]--;

            if(mpp[nums[l]]==0){
                mpp.erase(nums[l]);
            }
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;

    }
    return cnt;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return kdistinct(nums, k) - kdistinct(nums,k-1);
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // cout<<numSubarraysWithSum(arr, n, k)<<endl;
    //cout<<numberOfSubarrays(arr, n, k)<<endl;
    cout<<maxScore(arr, n, k)<<endl;

}
