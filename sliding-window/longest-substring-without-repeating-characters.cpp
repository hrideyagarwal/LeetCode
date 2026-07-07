#include <string.h>
#include <algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
               int maxlen=0;
                              int left=0;

        int x=s.size();
        for(int right =0 ; right<x;right++){
           for(int i=left;i<right;i++){
            if(s[i]==s[right]){
                left=i+1;
                break;

            }
           }
             maxlen=max(maxlen,(right-left)+1);


        }
        return maxlen;
        
    }
};