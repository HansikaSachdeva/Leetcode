class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        int ans;
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        for(auto x:m){
            if(x.second>n/2)
                ans=x.first;
        }
        return ans;
    }
};