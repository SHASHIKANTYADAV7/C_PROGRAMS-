#include<stdio.h>
#include<conio.h>

int main()
{
       int r = 0, c = 0, Cnt = 0;

       printf("\n Enter Count Of Rows And Colums => ");
       scanf("%d",&Cnt);

       for(r = 1; r <= Cnt; r++)
       {
           for(c = 1; c <= Cnt; c++)
           {
               if(r == 1 || c == Cnt/2+1)
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

