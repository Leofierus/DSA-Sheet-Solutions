class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()<2) return 0;
        int mi=INT_MAX,mx=0;
        for(int i=0;i<p.size();i++) mi=min(mi,p[i]),mx=max(mx,p[i]-mi);
        return mx;
    }
};
