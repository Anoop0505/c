#include<stdio.h>
struct complex
{
float r;
float i;
};
void main()
{
struct complex c1,c2,c3;
printf(" Enter the real and img value for complex number 1 \n");
scanf("%f%f",&c1.r,&c1.i);
printf(" Enter the real and imaginary value for complex number 2\n");
scanf(" %f%f",&c2.r,&c2.i);
c3.r=c1.r+c2.r;
c3.i=c1.i+c2.i;
if(c1.r==c2.r && c1.i==c2.i)
printf("SAME\n");
else
printf("NOT SAME\n");

printf(" The real part of complex number 3 is %f \n",c3.r);
printf("The Imaginary part of complex number 3 is %f \n",c3.i);
}
