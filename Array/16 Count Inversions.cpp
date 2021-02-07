long long int ct;
void M(long long a[], long long l, long long m, long long r) {
    vector<long long> v;
    long long t1=l,t2=m;
    while(t1<m&&t2<=r){
        if(a[t1]>a[t2]) v.push_back(a[t2++]),ct+=m-t1;
        else v.push_back(a[t1++]);
    }
    while(t2<=r) v.push_back(a[t2++]);
    while(t1<m) v.push_back(a[t1++]);
    for (int i=l,t1=0;i<=r;i++,t1++) a[i]=v[t1];
}
void MS(long long a[], long long l, long long r) {
    if(l>=r) return;
    long long m=(r+l)/2;
    MS(a,l,m),MS(a,m+1,r);
    M(a,l,m+1,r);
}
long long int inversionCount(long long a[], long long N)
{
    ct=0;
    MS(a, 0, N-1);
    return ct;
}
