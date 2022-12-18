#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0, dcnt = 0, Temp = 0;

     Up:
     printf("\n Enter Positive Integer Number To calculate Its Digit Sum => ");
     scanf("%d",&No);

     Temp = No;

     if(No < 0)
     {
          printf("\n Invalid Input...");
          goto Up;
     }

     while(Temp > 0)
     {
          dcnt++;
          Temp = Temp/10;
     }

     printf("\n Number Of Digits In Given Number %d = %d.",No,dcnt);

     getch();
     return 0;
}
