// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string>ans;
    stack<char>s;
    void backtrack(string current,int openN,int closeN,int n)
    {
        if(current.length()==2*n)
        {
            ans.push_back(current);
            return;
        }
        if(openN<n)
            backtrack(current+'(',openN+1,closeN,n);
            
        if(closeN<openN)
            backtrack(current+')',openN,closeN+1,n);
          
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        backtrack("(",1,0,n);
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
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends