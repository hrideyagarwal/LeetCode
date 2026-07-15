class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
             if(i>0 && nums[i]==nums[i-1])continue;
            while(l<r){
           
if(nums[i]+nums[l]+nums[r]>0) r--;
else if(0>nums[i]+nums[l]+nums[r])l++;
else if(0==nums[i]+nums[l]+nums[r]){
    res.push_back({nums[i] , nums[l] , nums[r]});
    l++ ; r--; 
    
}}
        }
        return res;
    }
};