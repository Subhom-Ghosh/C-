#include<bits/stdc++.h>
using namespace std;
vector<int>FindUnion(int arr1[],int arr2[],int n,int m){
    set<int>s;
    vector<int>Union;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(auto &it:s){
        Union.push_back(it);
    }
    return Union ;
}
int main(){
    int arr1[]={1,2,3,4,5,7,8,9};
    int arr2[]={1,3,6,8,9,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}