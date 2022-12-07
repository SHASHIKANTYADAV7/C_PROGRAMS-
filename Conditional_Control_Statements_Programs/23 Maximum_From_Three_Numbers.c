#include<stdio.h>
#include<conio.h>

int main()
{
       int Num1 = 0, Num2 = 0, Num3 = 0;

       Up:
       printf("\n Enter First Integer Number => ");
       scanf("%d",&Num1);

       printf("\n Enter Second Integer Number => ");
       scanf("%d",&Num2);

       printf("\n Enter Third Integer Number =>");
       scanf("%d",&Num3);

       if(Num1 > Num2 && Num1 > Num3)
       {
            printf("\n\t %d Is Greater",Num1);
       }
       else if(Num2 > Num1 && Num2 > Num3)
       {
            printf("\n\t %d Is Greater",Num2);
       }
       else if(Num3 > Num1 && Num3 > Num2)
       {
            printf("\n\t %d Is Greater",Num3);
       }
       else if(Num1 == Num2)
       {
            if(Num1 > Num3)
            {
                 printf("\n\t %d Is Greater",Num1);
            }
            else
            {
                 printf("\n\t %d Is Greater",Num3);
            }
       }
       else if(Num2 == Num3)
       {
            if(Num1 > Num3)
            {
                 printf("\n\t %d Is Greater",Num1);
            }
            else
            {
                 printf("\n\t %d Is Greater",Num3);
            }
       }
       else if(Num1 == Num3)
       {
            if(Num1 > Num2)
            {
                 printf("\n\t %d Is Greater",Num1);
            }
            else
            {
                 printf("\n\t %d Is Greater",Num2);
            }
       }
       else
       {
             printf("\n\t Invalid Numbers...");
       }

       printf("\n Thanks...");

       getch();
       return 0;
}
