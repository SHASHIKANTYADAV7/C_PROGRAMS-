#include<stdio.h>
#include<conio.h>

int main()
{
      int Num = 0, Cnt = 0, Start = 11, End = 0;

      Up:
      printf("\n Enter Positive Integral Number => ");
      scanf("%d",&Num);

      if(Num <= 1)
      {
           printf("\n Invalid Number.\n\t Please Enter Another Number.\n");
           getch();
           system("cls");
           goto Up;
      }

      for(Cnt = 2; Cnt < Num; Cnt++)
      {
            if(Num % Cnt == 0)
            {
                 break;
            }
      }
      if(Cnt == Num)
      {
             printf("\n\t %d Is Prime Number",Num);
      }
      else
      {
             printf("\n\t %d Is Not Prime Number",Num);
      }

      getch();
      return 0;
}
