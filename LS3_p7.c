#include<stdio.h>
#include<stdlib.h>
void read(int *list,int lsize)
{
 printf("Enter %d items\n",lsize);
 for(int i=0;i<lsize;i++)
   scanf("%d",(list+i));
}
void display(int *list,int lsize)
{
 printf("The item pruchased by hari is\n");
 for(int i=0;i<lsize;i++)
   printf("item %d=%d\n",i,*(list+i));
}

int main()
{
 int *list,lsize;
 printf("Enter the list size prepared by Priya\n");
 scanf("%d",&lsize);
 list=(int*)malloc(lsize*sizeof(int));
 read(list,lsize);
 display(list,lsize);
}
