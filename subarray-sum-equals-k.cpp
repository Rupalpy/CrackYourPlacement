class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int preSum=0;
        int cnt=0;
        map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<arr.size();i++){
            preSum+=arr[i];
            int remove=preSum-k;
            cnt+=mpp[remove];
            mpp[preSum]+=1;
            
        }
        
        
        return cnt;
        
        
        
        
        
//         int n = arr.size(); 
//         int cnt = 0;

//         for (int i = 0 ; i < n; i++) { 
//             int sum = 0;
//             for (int j = i; j < n; j++) { 
//                 sum += arr[j];

//                 if (sum == k)
//                     cnt++;
//             }
//         }
//         return cnt;
    }
};





// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107
