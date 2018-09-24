Given an unsorted array of integers, find the length of longest increasing subsequence.

Example:

Input: [10,9,2,5,3,7,101,18]
Output: 4 
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
Note:

There may be more than one LIS combination, it is only necessary for you to return the length.
Your algorithm should run in O(n2) complexity.
Follow up: Could you improve it to O(n log n) time complexity?





// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
        
//         int len=nums.size();
        
//         if (len==0) return 0;        
//         vector<int> dp(len,1);
        
//         dp[0]=1;
//         int res=0;
//         for(int i=0;i<len;i++){
            
//             for(int j=0;j<i;j++){
                
//                 if(nums[j]<nums[i]){
                    
//                     dp[i]=max(dp[i],dp[j]+1);
//                 }
//             }
//             res=max(res,dp[i]);
//         }
        
        
//         return res;
        
        
        
//     }
// };




class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        vector<int> ends{nums[0]};
        for (auto &a : nums) {
            if (a < ends[0]) ends[0] = a;
            else if (a > ends.back()) ends.push_back(a);
            else {
                int left = 0, right = ends.size();
                while (left < right) {
                    int mid = left + (right - left) / 2;
                    if (ends[mid] < a) left = mid + 1;
                    else right = mid;
                }
                ends[right] = a;
            }
        }
        return ends.size();
    }
};