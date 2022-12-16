#include<stdio.h>
#include<conio.h>

int main()
{
      int r = 0, c = 0, Cnt = 0;

      printf("\n Enter Rows Numbers And Colums Number Count => ");
      scanf("%d",&Cnt);

      printf("\n Pattern Is => \n\n");
      for(r = 1; r <= Cnt; r++)
      {
           for(c = 1; c <= Cnt; c++)
           {
                if(r == Cnt/2+1 || c = Cnt/2+1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
           }
           printf("\n");
      }

      getch();
      return 0;
}
