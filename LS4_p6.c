#include<stdio.h>
struct Point
{
int x;
int y;
};
struct Line
{
struct Point P1;
struct Point P2;
};
void main()
{
struct Line L;
printf("Enter point 1 of Line\n");
scanf("%d%d",&L.P1.x,&L.P1.y);
printf("Enter point 2 of Line\n");
scanf("%d%d",&L.P2.x,&L.P2.y);
printf("The Coordinates of line is P1(x,y)=P1(%d,%d) and P2(x,y)=P2(%d,%d)\n",L.P1.x,L.P1.y,L.P2.x,L.P2.y);
}
