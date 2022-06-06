#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>merge;
    if(intervals.size()==0)
        return merge;
    sort(intervals.begin(),intervals.end());
    vector<int>tempinterval = intervals[0];
    for(auto it: intervals){
        if(it[0]<=tempinterval[1])
            tempinterval[1] = max(it[1],tempinterval[1]);
        else{
            merge.push_back(tempinterval);
            tempinterval = it;
        }
    }   
     merge.push_back(tempinterval);
    return merge;           
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>Intervals(n);
    for(int i=0;i<n; i++){
    int x , y;
    cin>>x>>y;
    Intervals[i].push_back(x);
    Intervals[i].push_back(y);
    }
    vector<vector<int>>ans =  mergeIntervals(Intervals);
    for(auto i: ans){
        for(auto j:i){
            cout<<j<<" ";
        }
    } 
    cout<<"\n";

    return 0;
}