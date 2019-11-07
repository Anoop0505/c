#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 10
int stacksize=0;
struct location
{
char item;
struct location *address;
};
typedef struct location *LOCATION;
LOCATION push(LOCATION first, char symbol)
{
if(stacksize<MAXSIZE)
{
LOCATION temp;
temp=(LOCATION)malloc(sizeof(struct location));
temp->item=symbol;
temp->address=first;
first=temp;
stacksize++;
return(first);
}
else
{
printf("Stack is full\n");
return(first);
}
}
LOCATION pop(LOCATION first)
{
char symbol;
LOCATION current;
if(stacksize==0)
{
printf("Stack is empty\n");
return(first);
}
current=first;
printf("Popped element is %c\n",current->item);
first=current->address;
free(current);
stacksize--;
return(first);
}
void paranthesis(LOCATION first)
{
char par[10];
int length;
int i;
char symbol;
printf("Enter the paranthesis:");
gets(par);
puts(par);
length=strlen(par);
for(i=0;i<length;i++)
{
symbol=par[i];
if(symbol=='('&&stacksize==0)
{
first=push(first,symbol);
}
else if(symbol==')'&&stacksize==0)
{
printf("Not Balanced Paranthesis\n");
break;
}
else if(symbol=='(')
{
first=push(first,symbol);
}

else if(symbol==')'&&first->item=='(')
{
first=pop(first);
}
}
if(stacksize==0&&i==length)
{
printf("Balanced paranthesis\n");
}
else
{
printf("Not Balanced Paranthesis\n");
}
}
void main()
{
LOCATION first=NULL;
paranthesis(first);
}
