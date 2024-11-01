class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long binForm = n;
        //Edge Cases
        if(n == 0) return 1.0;
        if(x == 1) return 1.0;
        if(x == 0) return 0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 == 1) return -1.0;
        

        //negative power
        if(n < 0){
            x = 1/x;
            binForm = -binForm;
        }

        //loop for calculating power
        while(binForm > 0){
            if(binForm % 2 ==  1){
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }    


        //return answer
        return ans;
    }
};