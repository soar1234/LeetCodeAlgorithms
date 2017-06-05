#include <stdlib.h>
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int i=0;
    int flag=0;
  
    for(i=0;i<=numsSize;i++)
    {
        if(target<=nums[i])
        {
            flag=i;
            break;
        }
        else if (target>nums[i])
        {
            flag=i;
        }
    }
    return flag;
}

int main ()
{
	int nums[]={1,6,9};
	int target=4;
	printf("%d\n",searchInsert(nums,3,target));	
	return 0;
}
