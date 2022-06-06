#include<bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    
	unordered_map<int,int>mp;
    int res =0 , ans =0;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second>1)
           res = it.first;
    }
    for(int i=1;i<=n;i++){
        if(mp.find(i)==mp.end()){
            ans = i;
        }
    }
    
	return {ans,res};
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int,int>p=  missingAndRepeating(arr,  n);
    cout<<p.first<<","<<p.second;
    return 0;
}