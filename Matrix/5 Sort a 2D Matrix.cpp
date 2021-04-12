class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> v(N*N);
        int itr=0;
        for(int i=0;i<N;i++) for(int j=0;j<N;j++) v[itr]=Mat[i][j],itr++;
        sort(v.begin(),v.end());
        itr=0;
        for(int i=0;i<N;i++) for(int j=0;j<N;j++) Mat[i][j]=v[itr],itr++;
        return Mat;
    }
};
