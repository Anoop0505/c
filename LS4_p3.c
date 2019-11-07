#include<stdio.h>
struct point
{
int x;
int y;
};

void main()
{
struct point p1;
printf("Enter the value of x-axis and y-axis to point p1:\n");
scanf("%d%d",&p1.x,&p1.y);
printf("The x-axis of point is %d\n",p1.x);
printf("The y-axis of the point is %d\n",p1.y);
}

