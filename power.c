#include<stdio.h>
int main()
{
int base,exponent;
log long result=1;
printf("enter the base number:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
while(exponent!=0)
{
result *=base;
--exponent;
}
printf("answer=%11d",result);
}
