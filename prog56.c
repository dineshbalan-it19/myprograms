#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter your salary:");
    scanf("%d",&a);
    if(a > 250000 && a <500000)
    {
        b=a-250000;
        c=b*5/100;
        printf("your income amount is %d",c);
    }
    else if(a >500000)
    {
        b=a-250000;
        c=b-500000;
        d=(b*5/100)+(c*20/100);
        printf("your income amount is %d:",d);
    }
    else
    {
    printf("your income is below 250000");
    }
    return 0;
}
