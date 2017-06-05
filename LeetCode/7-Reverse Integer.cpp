#include <stdio.h>
#include <stdlib.h>
#include <climits>
#define BASE 10
/*
int reverse(int x)
{
    if ( 0==x )
    {
        return x;
    }
    const int MAX = INT_MAX;
    int sign; //-1 for negative or 1 for positive
    if (x>0)
    {
        sign = 1;
        
    }else
    {
        sign = -1;
    }
    int output = 0;
    while (0 != x)
    {
        int tmp = x % BASE;
        printf("output is %d, temp is %d\n", output, tmp);
        
        if (output > (MAX-tmp)/BASE)
        {
        	printf("x is %d, tmp is %d\n",x,tmp);
        	printf("overflows! output is %d, (MAX-tmp)/BASE is %d\n",output,(MAX-tmp)/BASE);
            //overflows
            return 0;
        }else
        {
            output = output * BASE + tmp;
        }
        x = (x - tmp)/BASE;
    }
    return sign*abs(output);
}
*/
int reverse(int x) {
    int output=0;
    int temp=0;
    int sign=0;
    const int MAX=INT_MAX;

    if (x==0)
        return 0;

    if(x>0)
    {
        sign=1;
    }
    else
    {
        x=-x;
        sign=-1;
    }
    
    while (x!=0)
    {
        temp= x % 10;
        printf("output is %d, temp is %d\n", output, temp);
        if (output > (MAX-temp)/10)
        {
        	printf("x is %d, tmp is %d\n",x,temp);
        	printf("overflows! output is %d, (MAX-tmp)/10 is %d\n",output,(MAX-temp)/10);
            return 0;//overflows
        }
        else
        {
            output=output*10+temp;
        }
        x = (x - temp)/10;
    }
    return sign*abs(output);
}

int main()
{
    int input = 2147483641;
    printf("The input is %d, and its reverse is %d\n", input, reverse(input));
    
}
