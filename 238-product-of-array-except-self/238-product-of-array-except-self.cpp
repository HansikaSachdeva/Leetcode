class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int product = 1;
        
        if(n<1)
            return ans;
        
        for(int i=0; i<n; i++){
            product*=nums[i];
            ans.push_back(product);
        }
        
        product=1;
        for(int i=n-1; i>0; i--){
            ans[i]=ans[i-1]*product;
            product*=nums[i];
        }
        ans[0]=product;
        return ans;
    }
};