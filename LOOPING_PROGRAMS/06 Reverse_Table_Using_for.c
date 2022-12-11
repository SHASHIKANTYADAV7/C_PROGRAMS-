#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0, Cnt = 0;

       printf("\n Enter Number Print Table => ");
       scanf("%d",&Num);

       for(Cnt = 10; Cnt >= 1; Cnt--)
       {
            printf("\n %3d * %3d = %3d",Num,Cnt,Num * Cnt);
       }

       getch();
       return 0;
}
