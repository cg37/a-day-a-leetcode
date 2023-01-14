#include <stdio.h>
int searchInsert(int *nums, int numsSize, int target) {
        int left = 0;
        int right = numsSize - 1; 
        int mid;

        if (nums[right] < target)
        {
            return right + 1;
        }
        else if (nums[0] > target)
            return 0;

        while (left <= right)
        {
                //mid = ( left + right) / 2;
                int mid=left+((right-left)/2);

                if (nums[mid] == target)
                {
                    return mid;
                }
                
                else if (nums[mid] > target)
                {
                        right=mid-1;
                }

                else if (nums[mid] < target)
                 {
                        left = mid + 1;
                 }

                if (nums[mid] ==target)
                {
                        return mid;
                }
        }
        return left;
}

int main()
{
    int testarray[4]={1,3,5,6};
    int target=5;
    int ans=searchInsert(testarray,4,target);
    printf("ans=%d\n",ans);
    return 0;
}