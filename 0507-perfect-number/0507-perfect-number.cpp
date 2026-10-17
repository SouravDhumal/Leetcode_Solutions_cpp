class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0; 
        // 1 2 4 4*7=28 num/i = 7 sum += num/i;
        for(int i=1;i<=num/2;i++){
            if(num%i==0) sum+=i;
        }
        if(sum==num) return true;
        return false;
    }
};