class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        for(int i=0;i<matrix.size();i++){ 
            if(matrix[i][0]<target) r=i;
            else if(matrix[i][0]==target) return true;
            else { break; }
        }
        return binary_search(matrix[r].begin(),matrix[r].end(),target);
    }
};
