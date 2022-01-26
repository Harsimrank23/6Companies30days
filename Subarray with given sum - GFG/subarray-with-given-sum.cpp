// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>ans;
        // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[n-1]<<arr[n];
        long long sum=0;
       
        int start=0;
        int end=0;
        // int i=0;
        while(end<=n)
        {
            if(sum==s)
            {
                ans.push_back(start+1);
                ans.push_back(end);
                return ans;
            }
            
            if(sum<s)
            {
                sum+=arr[end];
                end++;
            }
        
            else 
            {
                sum-=arr[start];
                start++;
            }
        }
        ans.push_back(-1);        
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends