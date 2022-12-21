#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, E_Cnt = 0, Dig = 0, Temp = 0;

        Up:
        printf("\n Enter Positive Integer Number => ");
        scanf("%d",&No);

        if(No < 0)
        {
             printf("\n Invalid Input...");
             goto Up;
        }

        Temp = No;

        while(Temp % 10)
        {
             Dig = Temp % 10;

             if(Dig % 2 == 0)
             {
                  E_Cnt++;
             }
             Temp = Temp / 10;
        }

        printf("\n Even Count In Given Number %d Is = %d.",No, E_Cnt);

        getch();
        return 0;
}
