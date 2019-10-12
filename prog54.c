#include <stdio.h>
int main(){
 int a;
 float b,c;
  printf("ENTER YOUR UNIT(S):");
   scanf("%d",&a);
  if(a<=50)
    {
        b=a*0.50;
}
 else if(a>=50&&a<=100)
 {
      b=25+((a-50)*0.50);
   }
   else if(a>=100&&a<=200)
 {
      b=100+((a-100)*1.20);
  }
   else
   {
      b=220+((a-200)*1.50);
  }
  c=(20.0/100)*b+b;
    printf("\n\n***YOUR BILL AMOUNT FOR THIS MONTH:%f***",c);
 return 0;
}
