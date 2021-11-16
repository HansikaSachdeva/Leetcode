class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //Hash Table O(n)
        map<int, int> map;
        vector<int> pairs;
        int n=nums.size();
        
        for(int i=0; i<n; i++){
            int complement = target-nums[i];
            if(map.find(complement)!=map.end()){
                pairs.push_back(map.find(complement)->second);
                pairs.push_back(i);
                break;
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return pairs;
    }
        
        
        //Brute Force O(n**2)
        /*int n = nums.size();
        int sum=0;
        vector<int> ans(2);
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
             if(nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
    return ans;
    }*/
};