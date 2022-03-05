class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        else if(nums.size()==1)
        {
            return nums[0];
        }
        else
        {
            vector<int>sum(10005);
            for(int i=0;i<nums.size();i++)
            {
                sum[nums[i]]+=nums[i];
            }
            int maxes[10005];
            maxes[1]=sum[1];
            maxes[2]=max(sum[1],sum[2]);
            for(int i=3;i<10005;i++)
            {
                maxes[i]=max(sum[i]+maxes[i-2],maxes[i-1]);
            }
            return max(maxes[10004],maxes[10003]);
        }
    }
};