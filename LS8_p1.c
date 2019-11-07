#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
typedef int shirtnum;
typedef char shirtcolor;
struct stacklocation
{
shirtnum sn;
shirtcolor sc;
struct stacklocation *link;
};
typedef struct stacklocation * LOCATION;
int stacksize=0;
LOCATION push(shirtnum snum,shirtcolor scolor,LOCATION top)
{
if(stacksize<MAX_SIZE)
{
LOCATION temp;
temp=(LOCATION)malloc(sizeof(struct stacklocation));
temp->sn=snum;
temp->sc=scolor;
temp->link=top;
top=temp;
stacksize++;
return(top);
}
else
{printf("stop the process, wardrobe is full\n");}
}
LOCATION pop(LOCATION top)
{
if(stacksize==0)
{printf("wardrobe is empty");}
else
{
LOCATION cur;
cur=top;
top=top->link;
free(cur);
stacksize--;
return(top);
}
}
void display(LOCATION top)
{
LOCATION cur;
if(top==NULL)
printf(" No shirt leftout in the Cupboard\n");
else
{
cur=top;
while(cur!=NULL)
{
printf("The Item is %d ",cur->sn);
printf("color is %c\n\n",cur->sc);
cur=cur->link;
}
}
}
void stackoperation(LOCATION top)
{
int choice;
shirtnum snum;
shirtcolor scolor;
for(;;)
{
printf("Enter the Choice\n");
printf("1: Priya Keep the Shirt \t 2: Hari take Shirt \t 3:Display\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("enter shirt number\n");
scanf("%d",&snum);
printf("enter shirt color r;red, w;white\n");
scanf(" %c",&scolor);
top=push(snum,scolor,top);
break;
case 2:printf("the last item is deleted\n");
top=pop(top);
display(top);
break;
case 3: display(top);
break;
default: exit(0);
}
}
}
void main()
{
LOCATION top=NULL;
stackoperation(top);
}
