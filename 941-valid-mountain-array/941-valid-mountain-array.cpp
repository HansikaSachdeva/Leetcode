class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3) 
            return false;
        
        int i = 0;
        
        //going uphill
        while(i<n-1 && arr[i]<arr[i+1])
            i++;
        
        //peak can't be first or last
        if(i==0 || i==n-1)
            return false;
        
        //going downhill
        while(i<n-1 && arr[i]>arr[i+1])
            i++;
        
        //if there's a larger number after walking downhill, return false
        return i==n-1;
    }
};