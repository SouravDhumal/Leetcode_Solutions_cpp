class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n==0 || n==1 || n==2){     
            return 0;
        }
        for(int i = 2; i<n;i++){    
            if(i==2){ 
                count++;
                continue;
            }
            if(i%2==0) continue;
            bool isPrime = true;
            for(int j=3; j*j<=i;j=j+2){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) count++;
        }
        return count;
    }
};