#include<stdio.h>
#include<conio.h>

int main()
{
        int iStart = 0, iEnd = 0, i = 0;

        printf("\n Enter Starting Number => ");
        scanf("%d",&iStart);

        printf("\n Enter Ending Number => ");
        scanf("%d",&iEnd);

        while(iStart <= iEnd)
        {
             for(i = 2; i < iStart; i++)
             {
                 if(iStart % i == 0)
                 {
                     break;
                 }
                 else
                 {
                     continue;
                 }
             }
             if(i == iStart)
             {
                 printf("\n\t %d",iStart);
             }

             iStart;
        }

        getch();
        return 0;
}
