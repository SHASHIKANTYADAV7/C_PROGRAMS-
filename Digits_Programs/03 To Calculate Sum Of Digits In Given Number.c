#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0, Dig = 0, dsum = 0, Temp = 0;

     Up:
     printf("\n Enter Positive Integer Number To Calculate Its Digit Sum => ");
     scanf("%d",&No);   ///85072

     Temp = No;

     if(No < 0)
     {
          printf("\n Invalid Input...");
          goto Up;
     }

     while(Temp > 0)
     {
          Dig = Temp % 10;
          dsum = dsum + Dig;
          Temp = Temp / 10;
     }

     printf("\n Sum Of Digits In Given Number %d = %d.",No,dsum);

     getch();
     return 0;
}
