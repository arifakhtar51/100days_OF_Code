class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(), m=mat[0].size();
        
        for(int i=0,j=m-1;i<n && j>=0;){
            int x=mat[i][j];
            if(x==target){
                return true;
            }else if(x>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};
