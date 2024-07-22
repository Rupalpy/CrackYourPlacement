class Solution {
public:
    string convertToTitle(int n) {
        string res;
      
        while(n>0){
            n--;   //0-25 a-z
            int curr=n%26;
            n=n/26;
            res.push_back(curr+'A');
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
 

// Example 1:

// Input: columnNumber = 1
// Output: "A"
// Example 2:

// Input: columnNumber = 28
// Output: "AB"
// Example 3:

// Input: columnNumber = 701
// Output: "ZY"
 

// Constraints:

// 1 <= columnNumber <= 231 - 1
