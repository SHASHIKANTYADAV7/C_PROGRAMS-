#include<stdio.h>
#include<conio.h>

int main()
{
       int r = 0, c = 0, Cnt = 0;

       printf("\n Enter Count Of Rows And Columns => ");
       scanf("%d",&Cnt);

       printf("\n Pattern Is => \n");

       for(r = 1; r <= Cnt; r++)
       {
           for(c = 1; c <= Cnt; c++)
           {
               if(c == 1 || r == 1 && c < Cnt || c == Cnt && r > 1 && r < Cnt || r == Cnt && c < Cnt)
               {
                   printf(" * ");
               }
               else
               {
                   printf("   ");
               }
           }
           printf("\n");
       }

       getch();
       return 0;
}

