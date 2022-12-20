#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0, Seven_Cnt = 0, Dig = 0, Temp = 0;

     Up:
     printf("\n Enter Positive Integer Number => ");
     scanf("%d",&No);

     Temp = No;

     if(No < 0)
     {
          printf("\n Invalid Input...");
          goto Up;
     }

     while(Temp > 0)
     {
          Dig = Temp % 10;

          if(Dig == 7)
          {
              Seven_Cnt++;
          }
          Temp = Temp / 10;
     }

     printf("\n Seven's In Given Number %d = %d = %d.",No,Seven_Cnt);

     getch();
     return 0;
}
