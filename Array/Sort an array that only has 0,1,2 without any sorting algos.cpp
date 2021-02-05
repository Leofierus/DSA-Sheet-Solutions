void sort012(int a[], int n)
{
    int b[3]={0};
    for(int i=0;i<n;i++){
        if(a[i]==0) b[0]++;
        if(a[i]==1) b[1]++;
        if(a[i]==2) b[2]++;
    }
    for(int i=0;i<n;i++){
        if(b[0]!=0) a[i]=0,b[0]--;
        else if(b[1]!=0) a[i]=1,b[1]--;
        else a[i]=2;
    }
}
