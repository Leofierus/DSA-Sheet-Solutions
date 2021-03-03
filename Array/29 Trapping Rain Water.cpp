class Solution{
    public:
    int trappingWater(int a[], int n){
        int l=0,r=n-1,count=0,lmax=0,rmax=0;
        while(l<r){
            if(a[l]<=a[r]){
                if(a[l]>=lmax) lmax=a[l];
                else count+=(lmax-a[l]);
                l++;
            }
            else{
                if(a[r]>=rmax) rmax=a[r];
                else count+=(rmax-a[r]);
                r--;
            }
        }
        return count;
    }
};
