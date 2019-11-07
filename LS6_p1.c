#include<stdio.h>
#include<stdlib.h>
struct location
{
int item;
struct list *address;
};
typedef struct location *LOCATION;

LOCATION createlocation()
{
LOCATION newnode;
newnode=(LOCATION)malloc(sizeof(struct location));
return(newnode);
}

LOCATION insert(LOCATION first, int cost)
{
LOCATION temp;
temp=createlocation();
temp->item=cost;
temp->address=first;
first=temp;
return(first);
}

LOCATION delete(LOCATION first,int cost)
{
LOCATION cur,prv;
if(first==NULL)
{ printf("No item to delete\n");
return(first);
}
if(first->item==cost)
{
printf("The deleted item is %d\n",first->item);
cur=first;
first=first->address;
free(cur);
return(first);
}
prv=NULL;
cur=first;
while(cur!=NULL&&cur->item!=cost)
{
prv=cur;
cur=cur->address;
}
if(cur==NULL) printf("Item Not found\n");
else {
printf("Deleted item is %d\n",cur->item);
prv->address=cur->address;
free(cur);
}
return(prv);
}

void display(LOCATION first)
{
LOCATION cur;
int pos=1;
if(first==NULL)
printf("nothimg to display\n");
else
{
cur=first;
while(cur!=NULL)
{
printf("the cost of %d item purchased %d\n",pos,cur->item);
pos++;
cur=cur->address;
}
}
}

void main()
{
int cost,choice;
LOCATION first=NULL;
for(;;)
{
printf("Enter the Choice\n");
printf("1: Purchase \t 2: Remove \t3:Display \n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the cost of item purchase\n");
scanf("%d",&cost);first=insert(first,cost);
display(first);
break;
case 2: printf("enter the cost to be deleted\n");
scanf("%d",&cost);
 first=delete(first,cost);
display(first);
break;
case 3: display(first);
break;
default: exit(0);
}
}
}
