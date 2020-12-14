//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits



int countSetBits(int n)
{
    // Your logic here
    
     if(n==0)
        return 0;
    int p=0;
    int ans=0;
    while(pow(2,p)<=n)p++;
    p--;
   
    ans=p*pow(2,p)/2 +(n-pow(2,p)+1)+countSetBits(n-pow(2,p));
    return ans;
        
    

    
    
}



// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
