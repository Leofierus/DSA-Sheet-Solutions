class Solution{
  public:
    int findLongestConseqSubseq(int a[], int n)
    {
        int m=0;
        for(int i=0;i<n;i++) m=max(m,a[i]);
        vector<int> v(m+1,0);
        for(int i=0;i<n;i++) if(v[a[i]]==0) v[a[i]]++;
        int count=0,temp=0;
        for(int i=1;i<m+1;i++){
            if(v[i]==v[i-1] && v[i]==1) count++,temp=max(temp,count);
            else count=0;
        }
        return temp+1;
    }
};
