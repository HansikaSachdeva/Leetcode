class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=n; i>=0; i--){
            if(nums[i]+i>=n)
                n=i;
        }
        return n==0?1:0;
    }
};