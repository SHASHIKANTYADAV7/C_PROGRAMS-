#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0, Cnt =0;

       printf("\n Enter Number print Table => ");
       scanf("%d",&Num);

       Cnt = 1;
       do
       {
             printf("\n\t %3d * %3d = %3d",Num,Cnt,Num * Cnt);
             Cnt++;
       }while(Cnt <= 10);

       getch();
       return 0;
}
