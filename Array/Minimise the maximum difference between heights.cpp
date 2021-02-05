class Solution{   
public:
    int getMinDiff(int a[],int n,int k) {
        sort(a,a+n);
        int a1,a2,ans=a[n-1]-a[0];
        for(int i=1;i<=n-1;i++) if(a[i]>=k) a2=max(a[i-1]+k,a[n-1]-k),a1=min(a[0]+k,a[i]-k),ans=min(ans,a2-a1);
        return ans;
    }
};
