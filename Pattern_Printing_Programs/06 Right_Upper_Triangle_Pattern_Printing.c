#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;

        printf("\n Enter Count Of Rows And Colums => ");
        scanf("%d",&Cnt);

        printf("\n Pattern Is => \n\n");

        for(r = 1; r <= Cnt; r++)
        {
            for(c = 1; c <= Cnt; c++)
            {
                if(r <= c)
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
