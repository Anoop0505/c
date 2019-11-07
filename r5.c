#include<stdio.h>
void main()
{
int a[50],i,n,c=0;
printf("Enter how many numbers\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
c++;
}
printf("Count of even numbers is %d\n",c);
}
