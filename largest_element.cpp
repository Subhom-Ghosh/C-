#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
return max;
}
int main(){
    int arr[]={23,45,67,12,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxElement = largest(arr, n);
    cout << "Largest element is: " << maxElement << endl;

    return 0;
}