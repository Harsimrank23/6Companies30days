// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        // if(s.length()==0)
        //     return "";
        // string ans="";
        // if(isupper(s[0]))
        //     ans=ans+(char)tolower(s[0]);
        // else
        //     ans=ans+s[0];

        // for(int i=1;i<s.length();i++)
        // {
        //     if(isupper(s[i]))
        //         {ans=ans+" "+(char)tolower(s[i]);}
        //     else
        //         ans=ans+s[i];
        // }
        // return ans;
        
         string ans="";
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
                if(i!=0)ans+=" ";
            }
            ans+=s[i];
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends