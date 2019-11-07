#include<stdio.h>
struct complex 
{
float r;
float i;
};
void main()
{
struct complex c;
printf(" Enter the real and img value for complex number \n");
scanf("%f",&c.r);
scanf("%f",&c.i); 
printf(" The real part of complex number is %f\n",c.r);
printf("The Imaginary part of complex number is %f\n",c.i);
}
