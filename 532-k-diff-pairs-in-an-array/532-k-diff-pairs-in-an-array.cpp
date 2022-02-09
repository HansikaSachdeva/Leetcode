class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n=nums.size();
        int count=0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        if(k!=0){
            for(auto c= m.begin(); c!=m.end(); c++){
                if(m.find(c->first+k)!=m.end())
                    count++;
            }
        }
        else{
            for(auto c= m.begin(); c!=m.end(); c++){
                if(c->second>1)
                    count++;
            }
        }
        return count;
    }
};