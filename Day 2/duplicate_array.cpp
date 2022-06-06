#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	unordered_map<int,int>mp;
    int res;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
          if(it.second>1)
              res = it.first;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findDuplicate(arr,n);
    return 0;
}