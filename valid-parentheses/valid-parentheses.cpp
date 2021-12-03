class Solution {
public:
    bool isValid(string s) {
      stack<char> exp;
        char x;
        for(int i=0; i<s.length(); i++){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                exp.push(s[i]);
                continue;
            }
            
            if(exp.empty()) return false;
            
            if(s[i]==')'){
                x=exp.top();
                exp.pop();
                if(x=='{' || x=='[') return false;
            }
            
            if(s[i]==']'){
                x=exp.top();
                exp.pop();
                if(x=='{' || x=='(') return false;
            }
            
            if(s[i]=='}'){
                x=exp.top();
                exp.pop();
                if(x=='(' || x=='[') return false;
            }
        }
        if(exp.empty()) return true;
        else return false;
    }
};