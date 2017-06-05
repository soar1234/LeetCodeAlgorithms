#include <stdlib.h>
#include <stdio.h>


struct node{
	char data;
	struct node* next;
};
typedef struct node Node;

Node* sTop;

Node* creates() { 
    return NULL; 
} 

int isEmpty(Node* top) { 
    return (top == NULL); 
} 

int stacktop(Node* top) { 
    return top->data; 
} 

Node* add(Node* top, char item) { 
    Node* newnode; 

    newnode = (Node*) malloc(sizeof(Node)); 

    if(newnode == NULL) { 
        printf("\n記憶體配置失敗！"); 
        exit(1); 
    } 

    newnode->data = item; 
    newnode->next = top; 
    top = newnode; 

    return top; 
} 

Node* deletes(Node* top) { 
    Node* tmpnode; 

    tmpnode = top; 
    if(tmpnode == NULL) { 
        printf("\n堆疊已空！"); 
        return NULL; 
    } 

    top = top->next; 
    free(tmpnode); 

    return top; 
} 

void list(Node* top) { 
    Node* tmpnode; 
    tmpnode = top; 

    printf("\n堆疊內容：\n"); 
    while(tmpnode != NULL) { 
        printf("%c ", tmpnode->data); 
        tmpnode = tmpnode->next; 
    } 
    printf("\n堆疊列印完畢\n"); 
}

bool isValid(char* s) {
    int i=0 ;
    bool flag=true;
    
    sTop = creates(); 
    
    while(s[i]!='\0')
    {
    	list(sTop);
        switch(s[i])
        {
        	case '(':
				sTop = add(sTop, s[i]);
            	break;
        	case '{':
        		sTop = add(sTop, s[i]);
    		
				break;
         	case '[':
        		sTop = add(sTop, s[i]);
				break;
			case ')':
				if(sTop!=NULL)
				{
					if (sTop->data=='(')
					{
                		sTop = deletes(sTop); 
					}
					else
					{
						flag=false;
						return flag;
					}
				}
				else
				{
					flag=false;
					return flag;
				}
				break;
			case '}':
				if(sTop!=NULL)
				{
					if (sTop->data=='{')
					{
                		sTop = deletes(sTop); 
					}
					else
					{
						flag=false;
						return flag;
					}
				}
				else
				{
					flag=false;
					return flag;
				}
				break;
			case ']':
				if(sTop!=NULL)
				{
					if (sTop->data=='[')
					{
                		sTop = deletes(sTop); 
					}
					else
					{
						flag=false;
						return flag;
					}
				}
				else
				{
					flag=false;
					return flag;
				}
				break;	
			default:
				flag=false;
				return flag;    	
		}

		i++;		
    }

    if(sTop!= NULL)
    {
		flag=false;
	}
    return flag;
}

int main()
{
	char s[]={'['};
	
	if(isValid(s))
	{
		printf("\ntrue");
	}
	else
	{
		printf("\nfalse");
	}
	
	return 0;
}
