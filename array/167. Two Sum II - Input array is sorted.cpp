Given an array of integers that is already sorted in ascending order, find two numbers such that they
 add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target,
where index1 must be less than index2.

Note:

Your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution and you may not use the same element twice.
Example:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.





class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        set<int> res;                       //set中的元素都是已经排好序的
        
        unordered_map<int,int> m;
        
        for(int i=0;i<numbers.size();i++){
            m[numbers[i]]=i;
        }
        
        for(int i=0;i<numbers.size();i++){
            int aim=target-numbers[i];
            if(m.count(aim)&&m[aim]!=i){
                
                
                
                
              
                res.insert(i+1);
                res.insert(m[aim]+1);
                break;
                
            }
        }
        
        return vector<int>(res.begin(), res.end());
        
        
    }
};