Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"



class Solution {
public:
    string addBinary(string a, string b) {
        
        string s="";
      
        
        int len1=a.length(),len2=b.length();
        int len=max(len1,len2);
         vector<int>  sum(len,0);
        for(int i=0;i<len-len1;i++){
            
            a.insert(0,"0");
        }
        
        
        for(int i=0;i<len-len2;i++){
            
            b.insert(0,"0");
        }
        
        //cout<<b;
        
         int flag=0;
        for(int i=len-1;i>=0;i--){
            
           
            

            
            sum[i]=a[i]-'0'+b[i]-'0'+flag;
            flag=0;
            
            if(sum[0]>=2){
                
                sum[0]-=2;
                sum.insert(sum.begin(),1);
                
            }
            
            if(sum[i]>=2) {
                
                sum[i]-=2;
                flag=1;
            }
            
           
            
        }
        

        
        for(int i=0;i<sum.size();i++){
            
            //s.append(sum[i]+'0');
            s+=sum[i]+'0';
        }
        
        return s;
        
        
       
//         int a1=0,b1=0;
//         int len1=a.length(),len2=b.length();
        
//         int len=max(len1,len2);
//         string s="";
//          for(int i=0;i<len1;i++){
            
//             a1+=(a[i]-'0')*pow(2,len1-1-i);
//         }
        
//         cout<<a1<<endl;
        
//         for(int i=0;i<len2;i++){
            
//             b1+=(b[i]-'0')*pow(2,len2-1-i);
//         }
        
//         //string w="1";
//        // cout<<w[0]-'0';
//          cout<<b1<<endl;
//         int c=a1+b1;
//         //int i=0;
//         while(c!=0){
            
//           s.append(std::to_string((c%2)));
//           c=c/2;
//            // i++;
//         }
       
        
//         string res="";
//         for(int i=0,j=s.length()-1;i<s.length();i++,j--){
//             res[i]=s[j];
            
//         }
//         return res;//////////////////////////////////////////////////////////普通的字符串可以，但字符串过长时就不行了
        
        
        
        
    }
};