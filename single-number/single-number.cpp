class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        for(auto x:m){
            if(x.second==1)
                ans = x.first;
        }
        return ans;
    }
};