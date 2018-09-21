Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and 
each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.




class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len =digits.size();
        

        
        int j=0;
        
        while(digits[j]!='\0'){
            if(digits[j]==9){
                j++;
            }
            else{break;}
        }
        if(j==len){
            //digits[0]=1;
            
            for(int i=0;i<len;i++){
                digits[i]=0;
                
            }
            digits.insert(digits.begin(),1);
            return digits;
        }
        
        
     for(int k=len-1;k>=0;k--){
         
         if(digits[k]==9){
            digits[k]=0;
         }
         else{digits[k]++;break;}
     }
        
        
        
        
        return digits;
        
    }
};