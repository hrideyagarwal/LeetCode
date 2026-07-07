class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(int num=0;num<nums.size(); num++){
            if(duplicate.count(nums[num])>0){
                return true;
            }
            duplicate[nums[num]]++;

        }
        return false;
        
    }
};