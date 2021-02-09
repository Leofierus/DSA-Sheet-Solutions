void rearrange(int a[], int n)
{
    int i=-1,j=n,k=0;
    while(i<j)
    {
        while(i<=n-1&&a[i]>0) i++;
        while(j>=0&&a[j]<0) j--;
        if(i<j) swap(a[i],a[j]);
    }
    if(i==0||i==n) return;
    while(k<n&&i<n) swap(a[k],a[i]),i++,k+=2;
}
