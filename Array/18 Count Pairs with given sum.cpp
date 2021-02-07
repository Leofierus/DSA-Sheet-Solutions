class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            if(2*a[i]==k) count+=max(m[a[i]]-1,0);
            else count+=m[k-a[i]];
        }
        return count;
    }
};
