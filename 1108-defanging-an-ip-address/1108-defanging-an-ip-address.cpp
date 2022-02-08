class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto c:address){ //did not work with it i=0; i<n; i++
            if(c== '.') //worked with '.' not "."
                res+="[.]";
            else
                res+=c;
        }
        return res;
    }
};