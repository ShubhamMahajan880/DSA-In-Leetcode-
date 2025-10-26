class Solution{
public:
    
    bool isPrime(int num) {
        if(num <= 1) return false;
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) return false;
        }
        return true;
    }

    
    long long prime_Sum(int n){
        long long sum = 0;
        for(int i = 2; i <= n; i++){
            if(isPrime(i))
                sum += i;
        }
        return sum;
    }
};
