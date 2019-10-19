 #include<stdio.h>
int main()
{
int a[99],i,x;
printf("enter 100 values :\t");
for(i=0;i<=99;i++)
{
scanf("%d",&a[i]);
}
x=a[0];
for(i=0;i<=99;i++)
{
if(a[i]>x)
{
x=a[i];
}
}
printf("the greatest among 100 number is:%d\t",x);
return 0;
}
