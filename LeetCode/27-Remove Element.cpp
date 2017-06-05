#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int i=0,j=0;
    int flag=numsSize;
    int temp;
    
    for(i=0;i<numsSize;i++)
    {
    	for(j=i+1;j<numsSize;j++)
    	{
        	if(nums[i]==val)
        	{
            	temp=nums[i];
           		nums[i]=nums[j];
            	nums[j]=temp;
        	}
    	}
    }
    
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
            flag--;
        }
    }
    
    return flag;
}

int main()
{
	int nums[4]={3,2,2,3};
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d ",nums[i]);
	}
	printf ("\n%d\n",removeElement(nums,4,3));
		for(i=0;i<4;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0;
}
