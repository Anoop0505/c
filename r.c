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
LOCATION updateitem(LOCATION first,int cost,int a)
{
if(a==1)
{
first->item=a;
return(first);
}
else
{
LOCATION cur;
int count=1;
cur=first;
while(cur!=NULL && count!=a)
{
cur=cur->address;
count++;
}
cur->item=cost;
return(first);
}
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
if(cur==NULL)
printf("Item Not found\n");
else {
printf("Deleted item is %d\n",cur->item);
prv->address=cur->address;
free(cur);
}
return(first);
}
void display(LOCATION first)
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
LOCATION update(LOCATION first,int a)
{
LOCATION cur;
cur=first;
while(cur!=NULL)
{
cur->item=cur->item*a;
cur=cur->address;
}
return(first);
}
LOCATION swap(LOCATION first)
{
LOCATION cur;
int temp;
cur=first;
while(cur->address!=NULL)
{
cur=cur->address;
}
temp=first->item;
first->item=cur->item;
cur->item=temp;
return(first);
}
int count(LOCATION first)
{
int a=0;
LOCATION cur;
cur=first;
while(cur!=NULL)
{
a=a+cur->item;
cur=cur->address;
}
return(a);
}
void main()
{
int cost,choice,position;
LOCATION first=NULL;
for(;;)
{
printf("Enter the Choice\n");
printf("1: Insert Front\t 2: Insert Last 3: Insert Position\n");
printf("4:Delete Front 5: Delete Last 6: Delete item 7:Display 8: Update Item 9:update 10:swap 11:Addall\n");
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
scanf("%d",&position);
first=insertposition(first,cost,position);
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
case 8: printf("enter the cost of item to be changed and the position where it should be changed\n");
scanf("%d%d",&cost,&position);
first=updateitem(first,cost,position);
display(first);
break;
case 9:printf("enter the value with which the list should be updated with\n");
scanf("%d",&cost);
first=update(first,cost);
display(first);
break;
case 10:first=swap(first);
display(first);
break;
case 11:
cost=count(first);
printf("sum=%d\n",cost);
break;
default: exit(0);
}
}
}
