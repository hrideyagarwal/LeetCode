class Solution {
public:
    int reverse(int x) {
        bool isneg = false;
        if(x<0){
            isneg=true;
            x= -x;
        }
        int rev=0;
        while(x!=0){
            int digit = x% 10;
            x/=10;
            rev=(rev*10)+digit;
        }
        if (rev> INT_MAX || rev<INT_MIN) return 0;
        return isneg==true? -rev: rev;

    }
};