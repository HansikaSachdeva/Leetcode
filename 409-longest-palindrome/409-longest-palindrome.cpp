class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        
        for(int i = 0; i < n; i++)
            mp[s[i]]++;
        
        int count = 0;
        
        for(auto i : mp)
            if(i.second % 2 != 0)
                count++;
        
        if(count > 1)
            return n - count + 1;
        
        return n;
            
    }
};