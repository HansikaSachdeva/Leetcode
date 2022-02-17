class Solution {
public:
    vector<int> partitionLabels(string S) {
        
        vector<int> end_index(26, 0); //store last index of each letter in string
        int n=S.length();
        
        for(int i=0; i<n; i++)
            end_index[S[i]-'a'] = i; //subtract ASCII value, eg. a-ASCII of a = 0, b-ASCII of a = 1 etc
        
        int start = 0, end = 0;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            end=max(end, end_index[S[i]-'a']);
            if(i==end){
                ans.push_back(i-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};