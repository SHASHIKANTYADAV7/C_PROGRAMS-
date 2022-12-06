#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0;

       Up:
       printf("\n\t Enter Positive Integer Number => ");
       scanf("%d",&Num);

       if(Num <= 0)
       {
              printf("\n\t Invalid Number.\n\t Please Enter Another Number.");
              getch();
              system("cls");
              goto Up;
       }
              printf("\n\t Square Of %d = %d",Num,Num * Num);

              printf("\n Thanks...");

       getch();
       return 0;
}
