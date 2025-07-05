#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={23,4,67,89,90,92};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << (isSorted(arr, n) ? "True" : "False");
}