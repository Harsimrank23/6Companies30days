// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string ans="";
//   map<char,int>m;
//   for(int i=0;i<src.length();i++)
//   {
//       m[src[i]]++;
//   }
  
//   for(auto x:m)
//   {
//       ans+=x.first;
//       char c='0'+x.second;
//       ans+=c;
      
//   }

    int c=1;
    for(int i=0;i<src.length();i++)
    {
        if(src[i]==src[i+1])
            c++;
        else
        {
            ans+=src[i];
            ans+='0'+c;
            c=1;
        }
    }
  return ans;
}     
 
