#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Temp = 0;

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
           //Processing Logic
           Temp - Temp/10;
      }

      printf("\n Output");

      getch();
      return 0;
}
