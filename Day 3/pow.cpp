// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

// Example 1:

// Input: x = 2.00000, n = 10
// Output: 1024.00000






#include<bits/stdc++.h>
using namespace std;
 double myPow(double x, int n) {
        double c = pow(x,n);
        return c;
    }
int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    cout<<myPow(x,n);
    return 0;
}