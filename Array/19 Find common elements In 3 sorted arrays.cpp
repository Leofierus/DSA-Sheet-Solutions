class Solution
{
    public:    
        int bS(int arr[], int l, int r, int x) 
        { 
            while (l <= r) { 
                int m=l+(r-l)/2; 
                if(arr[m]==x) return true; 
                if(arr[m]<x) l=m+1; 
                else r=m-1; 
            }
            return false; 
        } 
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> temp;
            temp.push_back(-1);
            vector<int> lol(n1,0);
            if(n1==0 || n2==0 || n3==0) return temp;
            int count=0;
            for(int i=0;i<n1;i++) if(!bS(B,0,n2-1,A[i])) lol[i]=-1,count++;
            for(int i=0;i<n1;i++) if(lol[i]!=-1) if(!bS(C,0,n3-1,A[i])) lol[i]=-1,count++;
            if(count==n1) return temp;
            else{
                vector<int> v;
                for(int i=0;i<n1;i++) if(lol[i]!=-1&&find(v.begin(),v.end(),A[i])==v.end()) v.push_back(A[i]);
                return v;
            }
        }
};
