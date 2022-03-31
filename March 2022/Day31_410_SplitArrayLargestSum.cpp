class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int left=0,right=0,n=nums.size();
        for(int i=0;i<n;++i)
        {
            left=max(left,nums[i]);
            right+=nums[i];
        }
        int mid=0,ans=0;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            int count=0,tempsum=0;
            for(int i=0;i<n;++i)
            {
                if(tempsum+nums[i]<=mid)
                {
                    tempsum+=nums[i];
                }
                else
                {
                    count++,tempsum=nums[i];
                }
            }
            count++;           
            if(count<=m)
            {
                right=mid-1;
                ans=mid;
            }
            else 
            {
                left=mid+1;
            }
        }
        return ans;
    }
};