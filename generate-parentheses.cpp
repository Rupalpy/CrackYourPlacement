class Solution {
public:
   vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpar(res,"", n, 0);
        return res;
    }
   void addingpar(vector<string> &res,string str,int n,int m){
       if(n==0 && m==0){
           res.push_back(str);
           return ;
       }
       if(m>0){
           addingpar(res,str+")",n,m-1);
           
       }
       if(n>0){
           addingpar(res,str+"(",n-1,m+1);
           
       }
   }
};




// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8
