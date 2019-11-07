#include<stdio.h>
typedef int AGE;
typedef int DOB;
typedef char NAME[10];
void main()
{
AGE my_age; 
DOB my_dob; 
NAME my_name; 
printf("Enter the age\n");
scanf("%d",&my_age);
printf("Enter the Date of Birth\n");
scanf("%d",&my_dob);
printf("Enter the name \n");
scanf("%s",my_name);
printf("The age of %s is %d as per the date of birth %d\n",my_name,my_age,my_dob);
}
