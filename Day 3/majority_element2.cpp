// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]
// Example 2:

// Input: nums = [1]
// Output: [1]
#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int>v;
    int n = arr.size();
   unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second>n/3)
         v.push_back(it.first);
    }
  return v;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = majorityElementII(arr);
  for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}