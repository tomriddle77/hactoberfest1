#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	
long long countTriplets(long long *arr, long long n, long long x)
{
    if(n < 3)
        return 0;

    long long count = 0;
    sort(arr, arr+n);
    for(long long i = 0; i < n-2; i++)
    {
        if(arr[i] > 0 && arr[i] > x)
            break;

        long long j = i+1, k = n-1;
        while(j < k)
        {
            long long sum = arr[i]+arr[j]+arr[k];
            if(sum < x)
            {
                count += k-j;
                j++;
            }
            else k--;
        }
    }

    return count;
}

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
