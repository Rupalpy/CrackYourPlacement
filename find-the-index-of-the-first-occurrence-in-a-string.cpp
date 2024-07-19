class Solution {
public:
    int strStr(string haystack, string needle) {
        // If needle is empty, return 0 as per problem statement
        if (needle.empty()) return 0;
        
        int haystackLen = haystack.size();
        int needleLen = needle.size();
        
        // Loop through the haystack until there are enough characters left to match needle
        for (int i = 0; i <= haystackLen - needleLen; i++) {
            int j;
            for (j = 0; j < needleLen; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needleLen) {
                return i; // Found the needle, return the starting index
            }
        }
        
        return -1; // Needle not found in haystack
    }
};





// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

// Constraints:

// 1 <= haystack.length, needle.length <= 104
// haystack and needle consist of only lowercase English characters.
