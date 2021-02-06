class Solution{
    public:
	void merge(int a1[], int a2[], int n, int m) {
	    int mx=(n+m)/2 + (n+m)%2;
        while(true)
        {
            int i,j;
            for(i=0;i+mx<n;i++) if(a1[i]>a1[i+mx]) swap(a1[i],a1[i+mx]);
            for(j=mx>n?mx-n:0;i<n&&j<m;i++,j++) if(a1[i]>a2[j]) swap(a1[i], a2[j]);
            if(j<m) for(j=0;j+mx<m;j++) if(a2[j]>a2[j+mx]) swap(a2[j],a2[j+mx]);
            if(mx<=1) break;
            mx=mx/2 + mx%2;
        }
	}
};
