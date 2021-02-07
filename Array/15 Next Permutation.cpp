class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int i=v.size()-1,j;
        while(i>0&&v[i]<=v[i-1]) i--;
        if(!i){reverse(v.begin(), v.end());return;}j=i;
        while(j<v.size()&&v[j]>v[i-1]) j++;
        swap(v[i-1],v[j-1]),reverse(v.begin()+i,v.end());
    }
};
