The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.


Example 1:

Input: 1
Output: "1"
Example 2:

Input: 4
Output: "1211"






class Solution {
public:
    string countAndSay(int n) {
        
       if(n < 1)return "";
          string prev = "1";
         for(int i = 2; i <= n; i++)
          {
              char curChar = prev[0];
              int times = 1;//curChar 出现的次数
             string tmpstr;
             prev.push_back('#');//处理边界条件
            // printf("%d  ",prev.size());
             for(int k = 1; k < prev.size(); k++)
             {
                 if(prev[k] == curChar)
                     times++;
                 else
                 {
                     tmpstr += to_string(times);
                     tmpstr.push_back(curChar);
                     curChar = prev[k];
                     times = 1;
                 }
             }
             prev = tmpstr;
         }
         return prev;
        
        
    }
};




