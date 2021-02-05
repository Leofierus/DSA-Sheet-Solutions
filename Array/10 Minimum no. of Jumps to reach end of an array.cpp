int minJumps(int a[], int n){
    if(a[0]==0) return -1;
    int mx=a[0],b=1,c=a[0];
    for(int i=1;i<n;i++){
        if(i==n-1) return b;
        mx=max(mx,a[i]+i);c--;
        if(c==0){
            b++;
            if(i>=mx) return -1;
            c=mx-i;
        }
    }
}
