class Solution{
  public:
    int middle(int A, int B, int C){
        vector<int> v;
        v.push_back(A);v.push_back(B);v.push_back(C);
        sort(v.begin(),v.end());
        return v[1];
    }
};
