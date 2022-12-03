#include<stdio.h>
#include<conio.h>

int main()
{
       int Num1 = 0, Num2 = 0;

       printf("\n Enter First Integer Number => ");
       scanf("%d",&Num1);

       printf("\n Enter Second Integer Number => ");
       scanf("%d",&Num2);

       (Num1 == Num2)? printf("\n\t Both Numbers Are Equal",Num1,Num2):(Num1>Num2)? printf("\n\t %d Is Maximum",Num1): printf("\n\t %d Is Maximum",Num2);

       printf("\n Thanks...");

       getch();
       return 0;
}
