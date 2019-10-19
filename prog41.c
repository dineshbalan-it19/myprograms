  #include<stdio.h>
int main()
{
int a[9],i,x;
printf("enter 10 values :\t");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
x=a[0];
for(i=0;i<=9;i++)
{
if(a[i]>x)
{
x=a[i];
}
}
printf("the greatest among 10 number is:%d\t",x);
return 0;
}
