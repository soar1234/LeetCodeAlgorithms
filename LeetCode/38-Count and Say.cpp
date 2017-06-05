#include <stdlib.h>
#include <stdio.h>

void countAndSay(int n) {
    int i;
    //char se[N];
    
    if(n==1)
    {
        printf("1 ");    
    }
    else if(n==2)
    {
    	printf("11 ");
	}
	else if(n==3)
	{
		printf("21 ");
	}
	else if(n==4)
	{
		printf("1221 ");
	}
    
}

int main()
{
	int i=0;
	for(i=1;i<=4;i++)
	    countAndSay(i);
	
	return 0;
}
