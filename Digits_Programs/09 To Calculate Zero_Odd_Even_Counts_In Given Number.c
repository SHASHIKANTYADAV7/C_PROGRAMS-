#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Z_Cnt = 0, O_Cnt = 0, E_Cnt = 0, Dig = 0, Temp = 0;

       Up:
       printf("\n Enter Positive Integer Number => ");
       scanf("%d",&No);

       if(No < 0)
       {
           printf("\n Invalid Input...");
           goto Up;
       }

       Temp = No;

       while(Temp > 0)
       {
           Dig = Temp % 10;

           if(Dig == 0)
           {
                Z_Cnt++;
           }
           else if(Dig % 2 == 0)
           {
                E_Cnt++;
           }
           else
           {
                O_Cnt++;
           }
           Temp = Temp / 10;

           printf("\n Zero Digit Count In Given Number %d Is = %d",No,Z_Cnt);
           printf("\n Even Digit Count In Given Number %d Is = %d",No,E_Cnt);
           printf("\n Odd Digit Count In Given Number %d Is = %d",No,O_Cnt);
       }

       getch();
       return 0;
}
