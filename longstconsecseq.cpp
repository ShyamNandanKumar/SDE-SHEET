class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        set<int> h;
        for(int n:a)
        {
            h.insert(n);
        }
        int log=0;
        for(int n:a)
        {
            if(!h.count(n-1))
            {
                int cur=n;
                int curlog=1;
                while(h.count(cur+1))
                {
                    cur++;
                    curlog++;
                }
                log=max(log,curlog);
            }
        }
        return log;
    }
};
