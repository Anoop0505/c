#include<stdio.h>
#include<stdlib.h>
struct location
{
int item;
struct location *address;
};
typedef struct location * LOCATION;
LOCATION createnode()
{
LOCATION newnode;
newnode=(LOCATION)malloc(sizeof(struct location));
return(newnode);
}
LOCATION insertlast(LOCATION first,int cost)
{
LOCATION temp,cur;
cur=first;
temp=createnode();
temp->item=cost;
temp->address=NULL;
while(cur->address!=NULL)
{
cur=cur->address;
}
cur->address=temp;
return(first);
}
LOCATION insertfront(LOCATION first,int cost)
{
LOCATION temp;
temp=createnode();
temp->item=cost;
temp->address=first;
first=temp;
return(first);
}
LOCATION insertposition(LOCATION first,int cost,int position)
{
int count=1;
LOCATION prv,cur,new;
new=createnode();
prv=NULL;
cur=first;
while(cur!=NULL && count!=position)
{
prv=cur;
cur=cur->address;
count++;
}
new->item=cost;
prv->address=new;
new->address=cur;
return(first);
}
LOCATION deletefront(LOCATION first)
{
LOCATION cur,prv;
cur=first;
first=first->address;
free(cur);
return(first);
}
LOCATION deletelast(LOCATION first)
{LOCATION cur,prv;
cur=first;
if(cur==NULL)
printf("Item Not found\n");
while(cur->address!=NULL)
{
prv=cur;
cur=cur->address;
}
printf("Deleted item is %d\n",cur->item);
prv->address=cur->address;
free(cur);
return(first);
}
LOCATION deleteitem(LOCATION first,int cost)
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
return(first);
}void display(LOCATION first)
{
LOCATION cur;
int pos=1;
if(first==NULL)
printf(" Nothing to display\n");
else
{
cur=first;
while(cur!=NULL)
{
printf("The cost of %d item purschased till now is %d\n",pos,cur->item);
cur=cur->address;
pos++;
}
}
}
void main()
{
int cost,choice,position;
LOCATION first=NULL;
for(;;)
{
printf("Enter the Choice\n");
printf("1: Insert Front\t 2: Insert Last 3: Insert Position\n");
printf("4:Delete Front 5: Delete Last 6: Delete item \t7:Display \n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the cost of item purchase\n");
scanf("%d",&cost);
first=insertfront(first,cost);
display(first);
break;
case 2: printf("Enter the cost of item purchase\n");
scanf("%d",&cost);
first=insertlast(first,cost);
display(first);
break;
case 3: printf("Enter the cost of item purchase\n");
scanf("%d",&cost);
printf("Enter the position to insert\n");
scanf("%d",&position);first=insertposition(first,cost,position);
display(first);
break;
case 6: printf("Enter the cost of item delete\n");
scanf("%d",&cost);
first=deleteitem(first,cost);
display(first);
break;
case 4: first=deletefront(first);
display(first);
break;
case 5: first=deletelast(first);
display(first);
break;
case 7: display(first);
break;
default: exit(0);
}
}
}
