//A
//A B
//A B C
//A B C D
//A B C D E
#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;
        char ch = 'A';

        printf("\n Enter Count Of Rows And Column => ");
        sacnf("%d",&Cnt);

        printf("\n Pattern Is => \n");

        for(r = 1; r <= Cnt; r++)
        {
            for(c = 1,ch = 'A'; c <= Cnt; c++)
            {
                if(r >= c)
                {
                    printf("%c",ch);
                }
                else
                {
                    printf("   ");
                }
                ch++;
            }
            printf("\n");
        }

        getch();
        return 0;
}

