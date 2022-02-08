class Solution {
public:
    int addDigits(int num) {
        
        int temp = num;
        while(temp/10>0){
            int val = temp;
            int sum = 0;
            while(val>0){
                sum += val%10;
                val /=10;
            }
            temp=sum;
        }
        return temp;
        
        
        
        
        /* Recursion
        if(num/10==0) return num;
        int sum = 0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return addDigits(sum);
        */
    }
};