class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> temp = candies;
        int n=candies.size();
        sort(temp.begin(), temp.end());
        int high = temp[n-1];
        vector<bool> ans(n);
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies >= high)
                ans[i]=true;
            else
                ans[i]=false;
        }
        return ans;
    }
};