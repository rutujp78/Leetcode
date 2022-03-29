class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int left=0,right=nums.size(),count=0;
        while(left<=right)
        {
           int mid= left+(right-left)/2;
            count=0;
            for(int i:nums)
            {
                if(i<=mid)
                {
                    count++;
                }
            }
            if(count<=mid)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return left;
    }
};