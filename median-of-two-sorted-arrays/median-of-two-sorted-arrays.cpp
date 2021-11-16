class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> nums(n);
        
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        sort(nums.begin(), nums.end());
        
        if(n==0)    return 0;
        else{
            if(n%2==0)
                return (nums[n/2 -1] + nums[n/2])/2.0;
            else
                return nums[n/2];
        }
    }
};