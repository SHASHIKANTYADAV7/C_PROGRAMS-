//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;
        char ch = 'A';

        printf("\n Enter Count Of Rows And Column => ");
        sacnf("%d,&Cnt");

        printf("\n Pattern Is => \n");

        for(r = 1; r <= Cnt; r++)
        {
            for(c =1; c <= Cnt; c++)
            {
                if(r >= c)
                {
                    printf("%c",ch);
                    ch++;
                }
            }
            printf("\n");
        }

        getch();
        return 0;
}
