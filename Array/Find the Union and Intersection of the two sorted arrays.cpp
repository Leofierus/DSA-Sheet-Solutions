int doUnion(int a[], int n, int b[], int m)  {
    map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++) if(mp.find(a[i])==mp.end()) mp[a[i]]=1,count++;
    for(int i=0;i<m;i++) if(mp.find(b[i])==mp.end()) mp[b[i]]=1,count++;
    return count;
}
