#include<stdio.h>
#include<conio.h>

int main()
{
       int r = 0, c = 0, Cnt = 0;

       printf("\n Enter Count of Rows And Colums => ");
       scanf("%d",&Cnt);

       Printf("\n Pattern Is => \n");

       for(r = 1; r <= Cnt; r++)
       {
           for(c = 1; c <= Cnt; c++)
           {
               if(r == 1 || c == (Cnt+1)/2 && r < Cnt|| r == Cnt && c <= (Cnt+1)/2 && c >1 && c != (Cnt+1)/2 && c != 1|| c == 1 && r >= (Cnt+1)/2 && r < Cnt)
               {
                   printf(" *");
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
