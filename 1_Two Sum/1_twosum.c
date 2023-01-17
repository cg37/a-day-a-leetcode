#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *array=(int*)malloc(2*sizeof(int)); 

    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                array[0]=i;
                array[1]=j;
                *returnSize=2;
                return array;
            }         
        }
    }
    *returnSize=0;
    //*array=NULL;
    return array;
}
int main()
{
    int i;
    int nums[]={2,7,11,15};

    int target=9;
    int* returnSize = (int*)malloc(sizeof(int));
    int *res;
    res=twoSum(nums,4,target,returnSize);
    for(int i=0;i < *returnSize;i++)
    {
        printf("%d",res[i]);

    }
    return 0;
}