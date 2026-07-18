class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        int j = 0;
        int k = 2;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxi)
                maxi = nums[i];
            if (nums[i] < mini)
                mini = nums[i];
        }
        for (; k <= mini; k++) {
            if (mini % k == 0 && maxi % k == 0)
                j = k;
        }
        if (j == 0)
            return 1;
        else
            return j;
    }
};