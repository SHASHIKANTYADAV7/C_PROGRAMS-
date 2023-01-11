#include<stdio.h>
#include<conio.h>

int main()
{
       int r = 0, c = 0, rCnt = 0, cCnt = 0;

       printf("\n Enter Row Count => ");
       scanf("%d",&rCnt);

       printf("\n Enter Column Count => ");
       scanf("%d",&cCnt);

       printf("\n Pattern Is =>\n\t");

       for(r = 1; r <= rCnt; r++)
       {
            for(c = 1; c <= cCnt; c++)
            {
                 printf(" * ");
            }
            printf("\n");
       }

       getch();
       return 0;
}
