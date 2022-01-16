class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        for(int i=1;i<arr.size();i++)
        {
            int count=1;
            bool flag=false;
            
            int j=i;
            // increasing seq
            while(j<arr.size() && arr[j]>arr[j-1])
            {
                j++;count++;
            }
            
            while(i!=j && j<arr.size() && arr[j-1]>arr[j])
            {
                j++;count++;
                flag=true;
            }
            if(i!=j && count>2 && flag==true)
            {
                ans=max(ans,count);
                j--;
            }
            i=j;
        }
        return ans;
    }
};