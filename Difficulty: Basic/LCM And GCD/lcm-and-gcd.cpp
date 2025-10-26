class Solution {
public:
    int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    vector<int> lcmAndGcd(int a, int b) {
        int g = gcd(a, b);
        int l = lcm(a, b);
        return {l, g};  
    }
};
