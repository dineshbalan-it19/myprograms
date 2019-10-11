
#include<stdio.h>
int main()
{
int x,i,b;
printf("enter a number for multipication table:");
scanf("%d",&x);
for(i=1;i<=10;i++)
{
b=i*x;
printf("%d * %d = %d\n",i,x,b);

}
return 0;
}
