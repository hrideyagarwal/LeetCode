class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        
        int longestseq =0;
        for(auto num:st){
            if(st.find(num-1)==st.end()){
                int length=1;
                int curr=num;
                while(st.find(curr+1) != st.end() ){
                    length++;curr++;
                }
            longestseq=max(longestseq, length);

            }
        }
        return longestseq;

    }
};