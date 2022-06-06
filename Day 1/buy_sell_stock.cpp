#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &prices){
   int n = prices.size();
    int buy = prices[0];
    int res = 0;
    int sell;
    
    for(int i=0;i<n;i++){
        buy = min(buy,prices[i]);
        sell = prices[i]-buy;
          res = max(res,sell);
    }
     
    
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<maximumProfit(prices);
    return 0;
}