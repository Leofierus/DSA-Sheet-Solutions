class Solution{
    public:
    bool find3Numbers(int a[], int n, int x)
    {
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            int y=i+1,z=n-1;
            while(y<z){
                if(a[i]+a[y]+a[z]==x) return true;
                else if(a[i]+a[y]+a[z]<x) y++;
                else z--;
            }
        }
        return false;
    }
};
