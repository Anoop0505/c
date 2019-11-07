#include<stdio.h>
struct Point
{
int x;
int y;
};
void main()
{
struct Point p[4]; 
int i;
for(i=1;i<=4;i++)
{
printf("Enter the value x-axis and y-axis to point p%d\n",i);
scanf("%d%d",&p[i].x,&p[i].y);
}
for(i=1;i<=4;i++)
{
printf("The p %d is p(%d, %d)\n",i,p[i].x,p[i].y);
}
}
