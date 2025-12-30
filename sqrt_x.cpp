class Solution {
public:
    int mySqrt(int x) 
    {

        if(x<2) return x;
        int start = 1 , end = x , mid;
        int ans;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            //potential ans -> agr sq se chota hai to p a ho skta hai 
            if(mid == x/mid)
            {
                ans = mid;
                break;
            }
            else if(mid > x/mid)
            {
                end = mid - 1;
            }
            else if(mid < x/mid)
            {
                ans = mid;                
                start = mid + 1;
            }

        }
        return ans;
    }
};
