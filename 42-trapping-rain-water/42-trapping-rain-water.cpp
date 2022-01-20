class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
         if (n <= 2) 
        return 0;
 
    int water = 0;
 
    // `left[i]` stores the maximum height of a bar to the left
    // of the current bar
    int left[n-1];
    left[0] = INT_MIN;
 
    // process bars from left to right
    for (int i = 1; i < n - 1; i++) {
        left[i] = max(left[i-1], height[i-1]);
    }
 
    // `right` stores the maximum height of a bar to the right
    // of the current bar
    int right = INT_MIN;
 
    // process bars from right to left
    for (int i = n - 2; i >= 1; i--)
    {
        right = max(right, height[i+1]);
 
        // check if it is possible to store water in the current bar
        if (min(left[i], right) > height[i]) {
            water += min(left[i], right) - height[i];
        }
    }
 
    return water;
    }
};