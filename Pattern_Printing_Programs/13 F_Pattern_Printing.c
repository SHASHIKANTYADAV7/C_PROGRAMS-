#include<stdio.h>
#include<conio.h>

int main()
{
       int r = 0, c = 0, rCnt = 0, cCnt = 0;

       printf("\n Enter Count Of Rows And Columns => ");
       scanf("%d",&rCnt);

       printf("\n Enter Count Of Rows And Columns => ");
       scanf("%d",&cCnt);

       printf("\n Pattern Is => \n");

       for(r = 1; r <= rCnt; r++)
       {
           for(c = 1; c <= cCnt; c++)
           {
               if(c == 1 || r == 1 || r == rCnt/2+1)
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

