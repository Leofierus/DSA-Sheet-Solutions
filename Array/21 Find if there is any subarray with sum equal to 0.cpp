bool subaayExists(int a[], int n)
{
    map<int,int> m;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i],m[sum]++;
        if(m[sum]>1||a[i]==0||sum==0) return true;
    }
    return false;
}
