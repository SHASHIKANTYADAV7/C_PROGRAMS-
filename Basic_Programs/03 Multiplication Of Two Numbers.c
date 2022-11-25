//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
       int No1 = 0, No2 = 0, Sum = 0;
       
       printf("\n\t Enter A Two Numbers => ");
       scanf("%d%d",&No1,&No2);
       
       Sum = No1 * No2;
       
       printf("\n Multiplication Of %d * %d = %d",No1,No2,Sum);
       
       getch();
       return 0;
}