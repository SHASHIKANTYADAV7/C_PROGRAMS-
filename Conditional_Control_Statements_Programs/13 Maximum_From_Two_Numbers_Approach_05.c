#include<stdio.h>
#include<conio.h>

int main()
{
       int Num1 = 0, Num2 = 0;

       Up:
       printf("\n Enter Frist Integer Number => ");
       scanf("%d",&Num1);

       printf("\n Enter Second integer Number => ");
       scanf("%d",&Num2);

       if(Num1 == Num2)
       {
            printf("\n Both Numbers Are Equal.\n\n Enter Another Numbers");
            getch();
            system("cls");
            goto Up;
       }
       (Num1 > Num2)? printf("\n\t %d Is Maximum",Num1): printf("\n\t %d Is Maximum",Num2);

            printf("\n Thanks...");

       getch();
       return 0;
}
