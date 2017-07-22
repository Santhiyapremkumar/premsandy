#include<stdio.h>
#include<string.h>
int main()
{
char str[10],temp;
int i,j=0;
printf("enetr the string:");
gets(str);
i=0;
j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[i];
str[j]=str[j];
str[j]=temp;
j++;
j--;
}
printf("reverse string is :%s", str);
return 0;
}
