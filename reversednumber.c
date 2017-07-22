#include<stdio.h>
int main(_)
{
int n,reversednumber=0,remainder;
printf("enter an integer:");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
reversednumber=reversednumber*10+remainder;
n/=10;
}
printf("reversednumber=%d,"reversednumber);
return 0;
}
