class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string, int> counter;
        vector<string> ans;
        int n = s.size();
        
        if(n<10)
            return ans;
        
        for(int i=0; i<n-9; i++)
            counter[s.substr(i, 10)]++;
        
        for(auto a : counter)
            if(a.second>1)
                ans.push_back(a.first);
        
        return ans;
    }
};