class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        //Using basic stack concepts to solve the problem.
        for (char c : s) {
            // Opening brackets → push to stack
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;  // No matching opening
                if (c == ')' && st.top() != '(') return false;
                if (c == ']' && st.top() != '[') return false;
                if (c == '}' && st.top() != '{') return false;
                st.pop();  // valid match → remove
            }
        }
        return st.empty();  // All brackets matched
    }
};
