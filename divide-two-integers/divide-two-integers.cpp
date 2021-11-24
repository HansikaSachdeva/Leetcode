class Solution {
public:
    int divide(int dividend, int divisor) {
        bool isneg = false;
        
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)) isneg=true;
    
        long long absDividend = abs(dividend);
        long long absDivisor = abs(divisor);
        long long ans = 0;
        
        while(absDividend >= absDivisor){
            long long temp = absDivisor;
            long long quo = 1;
            while(temp<=absDividend){
                temp<<=1;
                quo<<=1;
            }
            ans+=quo>>1;
            absDividend-=temp>>1;
        }
        if(isneg==true) return ~ans+1;
        else if(ans>INT_MAX) return INT_MAX;
        else return ans;
    }
};