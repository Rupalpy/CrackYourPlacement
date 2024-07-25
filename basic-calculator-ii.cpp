class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char op = '+'; // Default operator
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            char ch = s[i];
            
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0'); // Form the number
            }
            
            if (!isdigit(ch) && !isspace(ch) || i == n - 1) { // If current char is operator or last character
                if (op == '+') st.push(num);
                else if (op == '-') st.push(-num);
                else if (op == '*') {
                    int top = st.top(); st.pop();
                    st.push(top * num);
                }
                else if (op == '/') {
                    int top = st.top(); st.pop();
                    st.push(top / num);
                }
                
                op = ch; // Update operator
                num = 0; // Reset number for the next one
            }
        }
        
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};

/*
Given a string s which represents an expression, evaluate this expression and return its value. 

The integer division should truncate toward zero.

You may assume that the given expression is always valid. All intermediate results will be in the range of [-231, 231 - 1].

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

Example 1:

Input: s = "3+2*2"
Output: 7
Example 2:

Input: s = " 3/2 "
Output: 1
Example 3:

Input: s = " 3+5 / 2 "
Output: 5
 

Constraints:

1 <= s.length <= 3 * 105
s consists of integers and operators ('+', '-', '*', '/') separated by some number of spaces.
s represents a valid expression.
All the integers in the expression are non-negative integers in the range [0, 231 - 1].
The answer is guaranteed to fit in a 32-bit integer. */
