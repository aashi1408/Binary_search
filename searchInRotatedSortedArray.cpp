class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0 , end = nums.size() - 1 , mid;

        while(start<=end)
        {
            mid = start + (end - start) / 2;//

            if(nums[mid]==target) return mid;//returning the index of the target\

            //left side sorted      4 5 6 7 1 2 3
            else if(nums[0]<=nums[mid])/* i was not using = as there are distinct elements 
            but if there is single ele than what we will do? so put = for that*/
            {
                if(nums[start]<=target && target<nums[mid])//move left
                //is range me hai kya?
                    end = mid - 1;
                else//move right
                //ni ! is range me hai/
                    start = mid + 1;
            }
            //right side sorted      6 7 1 2 3 4 5 
            else
            {
                if(nums[mid]<target && target<=nums[end])//right shift//= lagana bhool gyi thin
                //is range me ho kya?
                    start = mid + 1;
                else//shift left
                //ni! is range me hun
                    end = mid - 1;
            }

        } 
        return -1;//ele not present   
    }
};
