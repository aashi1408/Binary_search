class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int start = 1 , end = arr.size()-2 , mid;//avoids out of bound

        while(start<=end)
        {
            mid = start + (end-start)/2;

            //Peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            //right shift
            else if(arr[mid-1]<arr[mid])
            {
                start = mid + 1;
            }
            //left shift
            else if(arr[mid-1]>arr[mid])
            {
                end = mid - 1;
            }
        }
        return -1;   
    }
};
