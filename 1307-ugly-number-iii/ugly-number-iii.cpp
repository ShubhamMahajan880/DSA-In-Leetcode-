class Solution {
public:
    // Function to find GCD
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    // Function to find LCM
    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    // Function to count how many ugly numbers <= x
    long long countUgly(long long x, long long a, long long b, long long c) {
        long long ab = lcm(a, b);
        long long bc = lcm(b, c);
        long long ac = lcm(a, c);
        long long abc = lcm(a, bc);

        return x / a + x / b + x / c
             - x / ab - x / bc - x / ac
             + x / abc;
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        long long low = 1, high = 1e18, ans = -1;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (countUgly(mid, a, b, c) >= n) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return (int)low;
    }
};
