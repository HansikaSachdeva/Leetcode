class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //both ended up taking same runtime and memory
        
        for(int i=0; i<matrix.size(); i++)
            if(binary_search(matrix[i].begin(), matrix[i].end(), target))
                return true;
            return false;   
        
        
        /*Brute Force
        int n = matrix.size();
        int m = matrix[0].size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==target)
                    count++;
            }
        }
        //cout<<count;
        if(count>0) return true;
        else return false;*/
    }
};
