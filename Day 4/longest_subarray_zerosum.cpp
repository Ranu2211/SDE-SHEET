// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

// Example 1:

// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.


#include<bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
     int sum =0 , maxi=0;
     unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum == 0)
            maxi = i+1;
        else{
           if(mp.find(sum)!=mp.end()){
               maxi = max(maxi,i-mp[sum]);
           }
            else{
                mp[sum] =i;
            }
        }
    }
    
    
    
        
    return maxi;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto i : arr){
        cin>>i;
    }
    cout<<LongestSubsetWithZeroSum( arr);
    return 0;
}