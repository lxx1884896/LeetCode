Given an integer array nums, find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        
       
    
        int len=nums.size();
        vector<int> dp(len,0);
        dp[0]=nums[0];
        int res=INT_MIN;
         int sum=0;
        for(int i=0;i<len;i++){
            
           
           sum=max(sum+nums[i],nums[i]);
            res=max(res,sum);
        }
        return res;
        
    
       
    }
};