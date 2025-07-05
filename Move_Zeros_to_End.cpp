#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> arr){
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) return arr;
for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}
return arr;
}
int main(){
    vector<int>arr={1,0,3,2,0,5};
    int n=arr.size();
    vector<int>ans = moveZeros(n,arr);
    for(auto &it:ans){
        cout<<it<<" ";

    }
    cout<<'\n';
    return 0;
}