class Solution {
public:
    int mySqrt(int x) {
        
        //Binary Search Method
        long long high = x; 
        long long low = 0;
        if(x<=0) return 0;
        if(x==1) return 1;
        while((high-low)>1){
            long long mid = low + (high-low)/2;
            if(mid*mid<=x) low=mid;
            else high = mid;
        }
        return low;
        
        
        /*Newton's method, time limit exceeding
        if(x==0) return 0;
        if(x==1) return 1;
        double a = 1;
        double b;
        while(true){
            b = (a + x/a)/2;
            if(abs(b-1)<1) return b;
            a=b;
        }
        */
    }
};