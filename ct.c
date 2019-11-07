#include<stdio.h>
void read(int plhari[],int size)
{
 int i;
 printf("Enter %d item int the array\n",size);
 for(i=0;i<size;i++)
    scanf("%d",&plhari[i]);
}
void display(int plhari[],int size)
{
 int i;
 printf("The content of the array is\n");
 for(i=0;i<size;i++)
 {
    printf("%d elements is %d\n",i,plhari[i]);
 }
}
int copy(int plhari[],int newarr[],int newsize,int value)
{
 int i,j=0;
 for(i=0;i<newsize;i++)
 {
 newarr[j]=plhari[i];
 j++;
 }
 return(j);
}
void main()
{
 int plhari[10],newarr[10],i,newsize,value;
 read(plhari,10);
 display(plhari,10);
 printf("Enter the value below which discount is allowed\n");
 scanf("%d",&value);
 newsize=copy(plhari,newarr,10,value);
 display(newarr,newsize);
}
