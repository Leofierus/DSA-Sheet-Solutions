class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        if(a.size()<2) return a;
        vector<vector<int>> v;
        sort(a.begin(),a.end());
        int t1=a[0][0],t2=a[0][1];
        for(int i=1;i<a.size();i++){
            if(t2>=a[i][0]) t1=min(a[i][0],t1),t2=max(a[i][1],t2);
            else v.push_back({t1,t2}),t1=a[i][0],t2=a[i][1];
        }
        v.push_back({t1,t2});
        return v;
    }
};
