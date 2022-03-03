class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0,diff=0;
        if(nums.size()>2)
        {
            for(int i=0;i<nums.size()-2;i++)
            {
                if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1])
                {
                    diff++;
                }
                else
                {
                    diff=0;
                }
                count+=diff;
            }
        }
        else
        {
            count=0;
        }
        return count;
    }
};