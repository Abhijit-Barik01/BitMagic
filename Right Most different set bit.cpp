//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int  getRightMostDiffBit(int n)
    {
        if(n==0)
            return 0;
        return log2(n &-n)+1;
    }
int posOfRightMostDiffBit(int m, int n)
{
    
    // Your code here
    return getRightMostDiffBit(m^n);
    
    
}

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends
