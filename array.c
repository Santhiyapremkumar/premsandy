#include<stdio.h>
int main()
{
int array[50],size,i,largest;
printf("Enter the size of the array:");
scanf("%d",&size);
printf("Enter the %elements of the array:",size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
{
if(largest<array[i])largest=array[i];
}
printf("largest element in the given array is:%d",largest);
return 0;
}
