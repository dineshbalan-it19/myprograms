#include<stdio.h>
int main()
{
int n;
printf("enter the mark of a student");
scanf("%d",&n);
if((n==100)&&(n>=90))
{
printf("A is the grade");
}
else if((n<90)&&(n>=80))
{
printf("B is the grade");
}
else if((n<80)&&(n>=70))
{
printf("C is the grade");
}
else if((n<70)&&(n>=50))
{
printf("D is the grade");
}
else if((n<50))
{
printf("He FAIL");
}
return 0;
}
