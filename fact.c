#include<stdio.h>
void main()
{
int i,fact=1,num;
printf("enter the number");
scanf("%d",&num);
if(num<=0)
fact=1;
else
{
for(i=1;i<=num;i++)
{
fact=fact*i;
}
}
printf("factorial of %d=5d",num,fact);
}
