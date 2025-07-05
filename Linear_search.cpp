#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,5,8,3,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter a number which you want yo search";
    cin>>key;
    int result = linear(arr,n,key);
    cout<<"Key at index " <<result;
    return 0;
}