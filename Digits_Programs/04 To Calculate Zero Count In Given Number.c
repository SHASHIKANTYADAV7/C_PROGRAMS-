#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0, Zcnt = 0, Dig = 0, Temp = 0;

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
            if(Dig == 0)
            {
                 Zcnt++;
            }
            Temp = Temp / 10;
      }

      printf("\n Number of Zeros In Given Number %d = %d.",No,Zcnt);

      getch();
      return 0;
}
