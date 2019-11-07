#include<stdio.h>
void read(int plhari[], int size)
{
int i;
printf("Enter %d items into the aaray \n",size);
for(i=0;i<size;i++)
scanf("%d",&plhari[i]);
}
void display(int plhari[],int size)
{
int i;
printf("The Content of the Array is \n");
for(i=0;i<size;i++)
printf("%d Element is %d \n",i,plhari[i]);
}
void update1(int plhari[],int size)
{
int i;
for(i=0;i<size;i++)
plhari[i]=plhari[i]*2;
}
int addall(int plhari[],int size)
{
int i,total=0;
for(i=0;i<size;i++)
total=total+plhari[i];
return(total);
}
int updatepos(int plhari[], int size,int position, int value)
{
if(position<=size)
{
plhari[position]=value;
return(plhari[position]);
printf("After Updating \n");
}
else
printf("Invalid Input \n");
}
void search(int plhari[],int size,int ele)
{
int i;
for(i=0;i<size;i++)
{
if(plhari[i]==ele)
printf("%d is present in %d position \n",ele,i);
}
}
int count(int plhari[],int size,int val)
{
int i,c=0;
for(i=0;i<size;i++)
{
if(plhari[i]<val)
c++;
}
return(c);
}
void pos(int plhari[],int size,int pos1,int pos2)
{
int temp;
if(pos1<=size)
{
if(pos2<=size)
{
temp=plhari[pos1];
plhari[pos1]=plhari[pos2];
plhari[pos2]=temp;
printf("After Swapping \n");
}
}
else
printf("Inalid Input\n");
}
void copy(int plhari[],int plrebel[],int size)
{
int i;
for(i=0;i<size;i++)
plrebel[i]=plhari[i];
}

void extract(int plhari[],int size,int p1,int p2)
{
if(p1<=size)
{
if(p2<=size)
{
printf("%d is the Number present in %d position \n",plhari[p1],p1);
printf("%d is the Number present in %d position \n",plhari[p2],p2);
}
}
else
printf("Invalid Input\n");
}
void main()
{
int i, plhari[10], number, sum, ele, val, n, pos1, pos2, plrebel[10], p1, p2, position, value, update;
printf("Enter How many numbers to Read \n");
scanf("%d",&number);
read(plhari,number);
display(plhari,number);
update1(plhari,number);
printf("\nThe Price after getting doubled\n\n");
display(plhari,number);
printf("\nAdding all the Elements\n");
sum=addall(plhari,number);
printf("%d",plhari[0]);
for(i=1;i<number;i++)
printf("+%d",plhari[i]);
printf("=%d\n",sum);
printf("\nEnter the position & its respective value to be updated \n");
scanf("%d%d",&position,&value);
update=updatepos(plhari,number,position,value);
printf("%d is updated in %d position \n",update,position);
display(plhari,number);
printf("\nEnter the Element to be searched:");
scanf("%d",&ele);
search(plhari,number,ele);

printf("\nEnter the Value to be compared:");
scanf("%d",&val);
n=count(plhari,number,val);
printf("%d elements found which is less than the given value \n",n);
printf("\nEnter 2 Positions in array to be swapped\n");
scanf("%d%d",&pos1,&pos2);
pos(plhari,number,pos1,pos2);
display(plhari,number);
printf("Copying an Array to an another Array \n");
printf("PLHARI \n");
display(plhari,number);
copy(plhari,plrebel,number);
printf("\nPLREBEL \n");
display(plrebel,number);
printf("\nEnter the 2 Positions in the array from which the Number is to be extracted\n");
scanf("%d%d",&p1,&p2);
extract(plhari,number,p1,p2);
}
