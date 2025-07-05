#include<bits/stdc++.h>
using namespace std;
int slargest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int largest=INT_MIN;
    int slargest = INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main(){
    int arr[]={34,56,12,89,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sl=slargest(arr,n);
    cout<<sl;
    return 0;
}