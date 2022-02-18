class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        long long temp=1;
        vector<int> ans(rowIndex+1);
        
        ans[0] = ans[rowIndex] = 1;
        
        for(int i=1, up=rowIndex, down=1; i<rowIndex; i++, up--, down++){
            temp=temp*up/down;
            ans[i]=temp;
        }
        return ans;
    }
};