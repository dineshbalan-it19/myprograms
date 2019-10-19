
prog15    #include<stdio.h>
int main()
{
int a[9],i,count=0;
printf("enter 10 numbers:");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
if(a[i]==23)
{
count++;
}
}
printf("there are %d numbers equal to 23",count);
return 0;
}
