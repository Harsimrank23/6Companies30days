class Solution {
public:
    bool func(int mid ,vector<int>weights,int days)
    {
        int sum=0;
        int d=1;
        for(auto w:weights)
        {
            if(sum+w<=mid)
                sum+=w;
            else
            {
                sum=w;
                d++;
            }
        }
        if(d<=days)
            return true;
        return false;
            
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int max=0;
        
        for(auto i:weights)
        {
            if(i>max)
                max=i;
            sum+=i;
        }
        int low=max;
        int high=sum;
        int ans;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(func(mid,weights,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};