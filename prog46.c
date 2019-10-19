#include<stdio.h>
int main()
{
int size,a[size],i,n;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the elements for array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter a number to find");
scanf("%d",&n);
if(a[i]==n)
{
printf("the number is present in the array");
}
else
{
printf("the number is not present in the array");
}

return 0;
}
