/*  can you write Question here  */

#include<bits/stdc++.h>
using namespace std;
 int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) 
            return nums.size();
        int id = 1;
        for(int i = 1; i < nums.size(); ++i){ 
            if(nums[i] != nums[i-1])
                nums[id++] = nums[i];
        }
        return id;
    }
int main(){
    int n;
    cin>>n;
   vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<removeDuplicates(nums);
    return 0;
}
