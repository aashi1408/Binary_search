class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int start = 0 , end = nums.size() - 1 ;
        int ans = nums[0] ;//in the case of fully sorted array

        while(start<=end)
        {
            int mid = start + (end - start)/2;

            // right shift
            if(nums[0]<=nums[mid])//4 5 6 7 1 2 3 //= is imp if it's a single ele of the array
            {
                start = mid + 1;//shift to the right
            }
            //left shift
            else if(nums[0]>nums[mid])//4 5 1 2 3
            {
                ans = nums[mid];
                end = mid - 1;
            }
        }  
        return ans;  
    }
};
