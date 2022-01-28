// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int num=0;
        int c=1;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]=='-')
                continue;
            if(isdigit(str[i])!=0)
            {
                int temp=str[i]-'0';
                num+=c*temp;
                c*=10;
            }
            else 
                return -1;
        }
        if(str[0]=='-')
            num=num*-1;
        return num;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends