// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2





#include <bits/stdc++.h> 
using namespace std;
int is_majority(int arr[], int n)
{
    int ans = 0;
    int count = 1;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[ans])
            count++;
    else{
        count--;
    }
        if(count==0){
            ans =i;
            count =1;
        }
}
    return arr[ans];
}
int findMajorityElement(int arr[], int n) {
	int cand = is_majority(arr,n);
    int count = 0;
    for(int i=0;i<n;i++)
        if(arr[i]==cand)
            count++;
        if(count>n/2)
            return cand;
            else
                return -1;    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMajorityElement( arr,  n);
    return 0;
}