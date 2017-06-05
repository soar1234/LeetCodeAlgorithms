#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 80

int lengthOfLastWord(char* s) {
    int length=0;
    int lastwordlength=0;
    int i=0;
    char now,pre;
    
    now=s[0];
    pre=s[0];
    while(now!='\0')
    {
        printf("%c",now);
        if(now!=' ')
        {
        	length++;
        	printf("\n");
        	lastwordlength=length;
		}
        else if(now==' ' && pre!=' ')
        {
        	length=0;       
        }
        i++;
        pre=now;
        now=s[i];  

    }
    
    return lastwordlength;
}

int main()
{
	char s[]=" a ";
	
	printf("\nLast Word Length is %d",lengthOfLastWord(s));
	return 0;
}
