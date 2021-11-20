class Solution {
public:
    int maxVowels(string s, int k) {
        int j=0, i=0;
    int count=0, mx=0;
    while(j<s.length()){
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            count++;
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            mx=max(mx, count);
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count--;
            i++;
            j++;
                        
        }
    }
    return mx;
    }
};