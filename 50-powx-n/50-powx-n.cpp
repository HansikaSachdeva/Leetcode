class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        for(int i=n; i; i=i/2){
            if(i&1)
                ans = ans*x;
            x*=x;
        }
        return n>=0? ans : 1/ans;
    }
};