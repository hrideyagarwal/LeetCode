class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count =0 , maxcount =0 , left=0;

       for(int right = 0; right < nums.size(); right++) {
    if(nums[right] == 0) {
        count++;
    }

    if(count > k) {
        if(nums[left] == 0) {
            count--;
        }
        left++;
    }

    maxcount = max(maxcount, right - left + 1);
}
return maxcount;
    }
};