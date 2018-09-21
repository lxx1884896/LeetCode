Given an array nums of n integers and an integer target, find three integers 
in nums such that the sum is closest to target. Return the sum of the three integers.
You may assume that each input would have exactly one solution.

Example:

Given array nums = [-1, 2, 1, -4], and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).


/////////

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
     
        
        
        sort(nums.begin(), nums.end());
        int diff = 400000099;
        int zuijiejin = 0;
        
        int j = 0;
        int k = 0;
        
        for (int i=0;i<(nums.size() - 2);i++) {
            
            
            j = i + 1;
            k = nums.size() - 1;
            
            while (j < k) {
                int Sum = nums[i] + nums[j] + nums[k];
                int tmp_diff = Sum - target;
                
                if (tmp_diff == 0) {
                    return Sum;
                }
                
                if (tmp_diff < 0) { tmp_diff = -tmp_diff; }
                
                if (tmp_diff < diff) {
                    diff = tmp_diff;
                    zuijiejin = Sum;
                }
                
                tmp_diff = Sum - target;
                
                if (tmp_diff > 0) {
                    k -= 1;
                } else {
                    j += 1;
                }
            }
        }
        return zuijiejin;
        
        
        
        
        
    }
};