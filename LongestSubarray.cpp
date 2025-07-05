#include<bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>&arr,long long k){
    int n=arr.size();
    long long sum=0;
    int maxlen=0;
    int left=0,right=0;
    while(right<n){
        sum += arr[right]; 
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
    }
    return maxlen;
}
int main(){
    vector<int>arr = {-1, 1, 1};
 long long k=1;
    int len=getLongestSubarray(arr,k);
    cout<<len;
    return 0;
}