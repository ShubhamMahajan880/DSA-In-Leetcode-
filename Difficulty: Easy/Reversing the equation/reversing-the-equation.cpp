class Solution {
public:
    string reverseEqn(string s) {
        int n = s.length();
        reverse(s.begin(), s.end());
        int prev = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'|| s[i] == '/')
            {
                int j = i-1;
                while(prev<j)
                {
                    swap(s[prev],s[j]);
                    j--;
                    prev++;
                }
                prev = i+1;
            }
        }
        int j = n-1;
        while(prev<j)
        {
            swap(s[prev],s[j]);
            j--;
            prev++;
        }
        return s;
    }
        
};
