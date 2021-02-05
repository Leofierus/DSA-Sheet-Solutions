void rotate(int a[], int n)
{
    int t;
    for(int i=n-1;i>0;i--) t=a[i],a[i]=a[i-1],a[i-1]=t;
}
