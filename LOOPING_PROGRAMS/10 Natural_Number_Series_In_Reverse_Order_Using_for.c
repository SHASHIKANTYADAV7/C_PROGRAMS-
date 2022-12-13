#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0, Cnt = 0;

        printf("\n Enter Positive Integer Number => ");
        scanf("%d",&Num);

        for(Cnt = Num; Cnt >= 1; Cnt--)
        {
             printf("\n\t %d",Cnt);
        }

        getch();
        return 0;
}
