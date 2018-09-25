Given a string s consists of upper/lower-case alphabets and empty space characters ' ',
 return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5

python代码：
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if(len(s.split())==0):
            
            return 0
        return len(s.split()[-1])
    
        
        




C++代码：

class Solution {
public:
    
    int lengthOfLastWord(string s) {
        
       
        
	
        
        
       
// 	   const char *delim = "";
//         int len=s.size();
//         char str[len+1];
//         int i;
//         for( i=0;i<len;i++){
            
//            str[i]=s[i]; 
//         }
//         str[i]= '\0';
//        char *p=strtok(str,delim);
//         string res;
//         while(p!=NULL){
//             res(&p);
//            p = strtok(NULL, delim);
//         }
        
//         return res[res.size()-1].size();
        
          int right = s.size() - 1, res = 0;
        while (right >= 0 && s[right] == ' ') --right;
        while (right >= 0 && s[right] != ' ' ) {
            --right; 
            ++res;
        }
        return res;
    
        
       

       
      
        
    }
};










