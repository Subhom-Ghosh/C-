#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int nums[],int n) {
        int maxi=INT_MIN;
        int sum=0;
        int start=0;
        int startans=-1, endans=-1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum>maxi){
                maxi=sum;
                startans=start;
                endans=i;
            }
            if(sum<0) {
            sum=0;
            start=i+1;
        }
        }
        for(int i=startans;i<=endans;i++){
            cout<<nums[i]<<" ";
        }
        return maxi;
}
int main() {
    int nums[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = maxSubArray(nums, n);
    cout << "\nResult is: " << result << endl;
    return 0;
}
