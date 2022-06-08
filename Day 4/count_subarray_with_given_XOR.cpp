// Given an array of integers A and an integer B.

// Find the total number of subarrays having bitwise XOR of all elements equals to B.
// Example Input
// Input 1:

//  A = [4, 2, 2, 6, 4]
//  B = 6
// Input 2:

//  A = [5, 6, 7, 8, 9]
//  B = 5


// Example Output
// Output 1:

//  4
// Output 2:

//  2




#include <bits/stdc++.h> 
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    map<int,int>mp;
    int count =0;
    int XORR = 0;
    for(auto it : arr){
        XORR = XORR^it;
        if(XORR==x){
            count++;
        }
        if(mp.find(XORR^x)!= mp.end())
            count+= mp[XORR^x];
            mp[XORR]+=1;
        
    }
    return count;
}
int main(){
    int n , x;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
   cout<<subarraysXor(arr,  x);

    return 0;
}