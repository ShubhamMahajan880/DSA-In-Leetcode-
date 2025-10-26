class Solution {
public:
    bool armstrongNumber(int n) {
        int originalNumber = n;
        int sum = 0;

        while (n != 0) {
            int lastDigit = n % 10;
            sum += pow(lastDigit, 3);  // sum of cubes of digits
            n /= 10;
        }

        return sum == originalNumber; // check after the loop
    }
};