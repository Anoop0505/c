#include<stdio.h>
#include<stdlib.h>
struct location
{
int item;
struct location *address;
};
typedef struct location * LOCATION;
LOCATION updateitem(LOCATION first,int a)
{
int count=1;
LOCATION cur=first;
while(cur!=NULL)
{
if(count%2==0)
{
cur->item=cur->item%a;
}
cur=cur->address;
count=count+1;
}
return(first);
}
LOCATION createnode()
{
LOCATION newnode;
newnode=(LOCATION)malloc(sizeof(struct location));
return(newnode);
}
LOCATION insert(LOCATION first,int b)
{
LOCATION temp;
temp=createnode();
temp->item=b;
temp->address=first;
first=temp;
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
printf("The position %d in item %d\n",pos,cur->item);
cur=cur->address;
pos++;
}
}
}
void main()
{
int cost,ch,val;
LOCATION first=NULL;
for(;;)
{
printf("enter your choice\n");
printf("1:insert 2:output\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the number\n");
scanf("%d",&cost);
first=insert(first,cost);
break;
case 2:printf("value with which to be divided\n");
scanf("%d",&val);
first=updateitem(first,val);
display(first);
default:exit(0);
} 
}
}
