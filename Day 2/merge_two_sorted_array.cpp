#include<bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int>v ;
	int i =0, j =0, k =0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){ 
            v.push_back(arr1[i]);
            i++;
        }
        else{
            v.push_back(arr2[j]);
            j++;
        }
        
    }
    while(i<m){
        v.push_back(arr1[i]);
       i++;
        
    }
    while(j<n){
        v.push_back(arr2[j]);

        j++;
        
    }
    return v;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>arr1(m);
    vector<int>arr2(n);
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    vector<int>ans = ninjaAndSortedArrays( arr1, arr2,  m,  n);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}