
#include<stdio.h>
int main()
{
int a,i;
printf("enter a number:\t");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
if(a%i==0)
{
printf("the diviser of %d is %d\n",a,i);
}
}
return 0;
}

