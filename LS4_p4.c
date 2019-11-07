#include<stdio.h>
struct point
{
int x;
int y;
};

void main()
{
struct point p1,p2,p3,p4;
printf("Enter the value of x-axis and y-axis to point p1:\n");
scanf("%d%d",&p1.x,&p1.y);
printf("Enter the value of x-axis and y-axis to point p2:\n");
scanf("%d%d",&p2.x,&p2.y);
printf("Enter the value of x-axis and y-axis to point p3:\n");
scanf("%d%d",&p3.x,&p3.y);
printf("Enter the value of x-axis and y-axis to point p4:\n");
scanf("%d%d",&p4.x,&p4.y);
printf("The x-axis of point is %d\n",p1.x);
printf("The y-axis of the point is %d\n",p1.y);
printf("The x-axis of point is %d\n",p2.x);
printf("The y-axis of the point is %d\n",p2.y);
printf("The x-axis of point is %d\n",p3.x);
printf("The y-axis of the point is %d\n",p3.y);
printf("The x-axis of point is %d\n",p4.x);
printf("The y-axis of the point is %d\n",p4.y);
}

