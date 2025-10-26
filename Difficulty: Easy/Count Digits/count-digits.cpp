class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count = 0;
        int originalNumber = n;
        while(n!=0)
        {   
            
            int lastdigit = n%10;
            if(lastdigit!=0 && originalNumber%lastdigit == 0)
            {
            count++;
            }
            n/=10;
        }
        return count;
        
    }
};