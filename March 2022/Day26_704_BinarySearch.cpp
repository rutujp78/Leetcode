class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size(),mid;
        if(nums.size()==0)
        {
            return -1;
        }
        //cout<<nums.size();
        else if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        while(left<=right)
        {
            mid= left+(right-left)/2;
            if(nums[mid]==target)
            {
                return (mid);
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
        }
        return (-1);

    }
};