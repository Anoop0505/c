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
struct Triangle
{
struct Line L1;
struct Line L2;
struct Line L3;
};
void main()
{
struct Triangle T;
printf("Enter the First line of Triangle\n");
scanf("%d%d%d%d",&T.L1.P1.x,&T.L1.P1.y,&T.L1.P2.x,&T.L1.P2.y);
printf("Enter the Second line of Triangle\n");
scanf("%d%d%d%d",&T.L2.P1.x,&T.L2.P1.y,&T.L2.P2.x,&T.L2.P2.y);
printf("Enter the Third line of Triangle\n");
scanf("%d%d%d%d",&T.L3.P1.x,&T.L3.P1.y,&T.L3.P2.x,&T.L3.P2.y);
if((T.L1.P1.x==T.L3.P2.x && T.L1.P1.y==T.L3.P2.y)&&(T.L1.P2.x==T.L2.P1.x&&T.L1.P2.y==T.L2.P1.y)&&(T.L2.P2.x==T.L3.P1.x
&&T.L2.P2.y==T.L3.P1.y))
{
printf(" Points form the triangle\n");}
else
printf("Points Do not form the Triangle\n");
}
