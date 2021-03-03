int MaxProfit(int a[], int n)
{
    vector<int> v(n,0);
    int lol=a[n-1];
    for(int i=n-2;i>=0;i--) lol=max(a[i],lol),v[i]=max(v[i+1],lol-a[i]);
    lol=a[0];
    for(int i=1;i<n;i++) lol=min(a[i],lol),v[i]=max(v[i-1],v[i]+a[i]-lol);
    return v[n-1];
}
