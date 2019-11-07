#include<stdio.h>
typedef char NAME[20];
typedef int AGE;
typedef char ID;
typedef float CGPA;
typedef char GENDER;
typedef char DEP[3];

struct student
{
NAME my_name;
AGE my_age;
ID my_id;
CGPA my_cgpa;
GENDER my_gender;
DEP my_dep;
};

typedef struct student STUDENT;

void main()
{
STUDENT st;
printf("Enter the name \n");
scanf(" %s",st.my_name);
printf("Enter the age \n");
scanf("%d",&st.my_age);
printf("Enter the CGPA \n");
scanf("%f",&st.my_cgpa);
printf("Enter the gender \n");
scanf(" %c",&st.my_gender);
printf("Enter the department \n");
scanf(" %s",st.my_dep);
printf("Name of the student %s\n",st.my_name);
printf("Age fo the student %d",st.my_age);
printf("CGPA of the student %f\n",st.my_cgpa);
printf("Gender of the student %c\n",st.my_gender);
printf("Department of the student %s\n",st.my_dep);
}
