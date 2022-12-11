#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0, Cnt = 0;

       printf("\n Enter Number To Print Table => ");
       scanf("%d",&Num);

       Cnt = 10;
       while(Cnt >= 1)
       {
             printf("\n %3d * %3d = %3d",Num,Num * Cnt);
             Cnt--;
       }

       getch();
       return 0;
}
