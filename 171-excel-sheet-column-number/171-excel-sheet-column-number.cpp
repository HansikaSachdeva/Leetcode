class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int res = 0;
        int d;
        for(char c : columnTitle){
            
            d = c - 'A' + 1;
            res = res*26 + d;
        }
        return res;
    }
};