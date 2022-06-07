// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
 

// Example 1:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true



#include<bits/stdc++.h>
using namespace std;
bool findTargetInMatrix(vector< vector < int >> & mat, int m, int n, int target) {
    int lo = 0;
    int hi = (n*m-1);
    while(lo<=hi){
        int mid = (lo+(hi-lo)/2);
        if(mat[mid/n][mid%n]==target)
            return true;
        if(mat[mid/n][mid%n]<target)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return false;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector < vector < int >>  mat(m, vector<int>(n));
    int target;
    cin>>target;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    bool c = findTargetInMatrix( mat,  m,  n,  target);
    
        cout<< c;
    

    return 0;
}