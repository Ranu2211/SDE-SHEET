#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long currsum =0;
    long res = arr[0];
  
    for(int i=0;i<n;i++){
        currsum = currsum + arr[i];
         
        if(currsum<0)
            currsum =0;
       if(currsum>res)
           res = currsum;
    }
   return res;
}
int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxSubarraySum( arr, n);
    return 0;
}