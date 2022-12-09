#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0, Cnt = 0;

       printf("\n\t Enter Number To Table => ");
       scanf("%d",&Num);

       Cnt = 1;
       while(Cnt <= 10)
       {
             printf("\n\t %3d * %3d = %3d",Num,Cnt ,Num * Cnt);
             Cnt++;
       }

       getch();
       return 0;
}
