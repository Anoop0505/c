#include<stdio.h>
#include<stdlib.h>
int main()
{
int *darray,n;
printf("Enter the Size of Array\n");
scanf("%d",&n);
darray=(int *)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
scanf("%d",&darray[i]);
for (int i = 0; i < n; i++)
{
printf("Value of *ptr = %d\n", darray[i]);
}
}
