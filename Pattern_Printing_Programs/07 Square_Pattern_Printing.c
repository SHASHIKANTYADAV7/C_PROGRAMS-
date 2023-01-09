#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, rCnt = 0, cCnt = 0;

        printf("\n Enter Count Of Rows And Colums => ");
        scanf("%d",&rCnt);

        printf("\n Enter Count Of Rows And Colums => ");
        scanf("%d",&cCnt);

        printf("\n Pattern Is => \n");

        for(r = 1; r <= rCnt; r++)
        {
            for(c = 1; c <= cCnt; c++)
            {
                if(r == 1 || c == 1 || r == rCnt || c == cCnt)
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

        printf("\n Thanks...");

        getch();
        return 0;
}
