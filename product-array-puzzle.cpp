 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        // Initialize the answer vector with the required size
        vector<long long int> ans(n, 1);
        vector<long long int> pre(n, 1);
        vector<long long int> suff(n, 1);
        
        // Calculate the prefix products
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        
        // Calculate the suffix products
        for (int i = n - 2; i >= 0; --i) {
            suff[i] = suff[i + 1] * nums[i + 1];
        }
        
        // Calculate the result by multiplying prefix and suffix products
        for (int i = 0; i < n; ++i) {
            ans[i] = pre[i] * suff[i];
        }
        
        return ans;
  }



// Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].

 

// Example 1:

// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900
// Explanation: 
// For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.
// Example 2:

// Input:
// n = 2
// nums[] = {12,0}
// Output:
// 0 12
