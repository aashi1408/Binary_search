class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start = 0 , end = nums.size() - 1 , mid;
        int first = -1 , last = -1;//first and last indices

        //first occurence
        while(start<=end)
        {
            mid = (start+end)/2;

            if(nums[mid]==target)
            {
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
            else if(nums[mid]>target)
            {
                end = mid - 1;
            }
        }
         start = 0 , end = nums.size() - 1;//resetting is imp
        //last occurence
        while(start<=end)
        {
            mid = (start+end)/2;

            if(nums[mid]==target)
            {
                last = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
            else if(nums[mid]>target)
            {
                end = mid - 1;
            }
        }
        vector<int> ans(2);
        ans[0] = first;
        ans[1] = last;  

        return ans;  
    }
};
