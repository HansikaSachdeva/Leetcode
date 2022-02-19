class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> a(n, vector<int>(n,0));
        int val=1, r=0, c=0, m=n, i;
        
        /*  r - starting row index
            m - ending row index
            c - starting column index
            n - ending column index
            i - iterator
        */
        
        while(r < m && c < n){
            
            //Assigning values to first row
            for(i = c; i < n; i++)
                a[r][i] = val++;
            r++;
            
            //Assigning values to last column
            for(i = r; i < m; i++)
               a[i][n-1] = val++;
            n--;
            
            //Assigning values to last row
            if(r < m){
                for(i = n-1; i >= c; i--)
                    a[m-1][i] = val++;
                m--;
            }
            
            //Assigning values to first column
            if(c < n){
                for(i = m-1; i >= r; i--)
                    a[i][c] = val++;
                c++;
            }
        }
        return a;

    }
};