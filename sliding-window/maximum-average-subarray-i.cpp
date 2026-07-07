class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg=INT_MIN,avg=0,sum=0;
        int left=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
           sum+=nums[right];
           if(right-left+1>k){
            sum-=nums[left];
            left++;

           }
           if(right-left+1==k){
           avg=sum/(right-left+1);
           
maxavg=max(maxavg,avg);
        }



        }
        return maxavg;
        
    }
};