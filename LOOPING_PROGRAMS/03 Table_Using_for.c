#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0, Cnt =0;

       printf("\n Enter Table Number Print => ");
       scanf("%d",&Num);

       for(Cnt = 1; Cnt <= 10; Cnt++)
       {
            printf("\n\t %3d * %3d = %3d",Num,Cnt,Num * Cnt);
       }

            printf("\n Thanks...");

       getch();
       return 0;
}
