#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {
    
    if(x<0)
        return false;
    int length=0;
    int temp=0;
    int looptime=0;
    int leftnum,rightnum;
    
    temp=x;
    while (temp>0)
    {
    	temp=temp/10;
    	length++;
	}
	printf("Length is %d\n",length);
	
	looptime=length/2;
    for(int i=1;i<=looptime;i++)
    {
		rightnum=x%10;
		leftnum=x/(int)(pow(10,length-i+1))%10;
		printf("%lf\n",pow(10,length));
		if(rightnum!=leftnum)
			return false;

    }
    return true;
}

int main ()
{
	int x=12321;
	
	if(isPalindrome(x))
		printf ("%d is a Palindrome number\n",x);
	else
	    printf ("%d is not a Palindrome number\n",x);
	return 0;
}
