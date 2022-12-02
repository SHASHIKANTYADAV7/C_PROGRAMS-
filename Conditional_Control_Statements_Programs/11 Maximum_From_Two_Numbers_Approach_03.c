#include<stdio.h>
#include<conio.h>

int main()
{
       int Num1 = 0, Num2 = 0;

       printf("\n Enter First Integer Number => ");
       scanf("%d",&Num1);

       printf("\n Enter Second Integer Number => ");
       scanf("%d",&Num2);

       if(Num1 == Num2)
       {
             printf("\n\t Both Are Equal");
             goto Down;
       }
       if(Num1 > Num2)
       {
             printf("\n\t %d Is Maximum",Num1);
       }
       else
       {
             printf("\n\t %d Is Maximum",Num2);
       }
       Down:

             printf("\n Thanks....");

       getch();
       return 0;
}
