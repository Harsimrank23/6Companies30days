class Solution {
public:
   
    
    bool stoneGame(vector<int>& piles) {

        int n=piles.size();

        deque<int>pq;
        // pq.push_front(piles[0]);
        for(int i=0;i<n;i++)
        {
            pq.push_back(piles[i]);
        }
        int count=0;
        int sum2=0;
        int k=n/2;
        while(k>0)
        {
            if(pq.front()>pq.back())
            {
                count=count+pq.front();
                pq.pop_front();
                 sum2=sum2+pq.back();
                pq.pop_back();

            }
            else
            {
                count=count+pq.back();
                pq.pop_back();
                sum2=sum2+pq.front();
                pq.pop_front();
            }
            k--;
        }
        if(count>sum2)
        {
            return true;
        }
        return false;
    }
};