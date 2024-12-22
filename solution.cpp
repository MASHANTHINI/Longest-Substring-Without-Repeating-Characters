class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int max=0;
   int len=0,a=0;
   int count[256]={0};
   for(int i=0;i<s.size();i++){
    count[(unsigned char)s[i]]++;
    len++;
    
    while(count[(unsigned char)s[i]]>1){
        count[(unsigned char)s[a]]--;
        a++;
        len--;
    }
    if(len>max)
    max=len;
    
   }
   return max;
    
    }
};
