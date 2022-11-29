#include<stdio.h>
#include<conio.h>

int main()
{
         int Month = 0;

         printf("\n Enter Number (1-12) For Month Text => ");
         scanf("%d",&Month);

         if(Month == 1)
         {
              printf("\n January \n");
         }
         else if(Month == 2)
         {
              printf("\n February \n");
         }
         else if(Month == 3)
         {
              printf("\n March \n");
         }
         else if(Month == 4)
         {
              printf("\n April \n");
         }
         else if(Month == 5)
         {
              printf("\n May \n");
         }
         else if(Month == 6)
         {
              printf("\n June \n");
         }
         else if(Month == 7)
         {
              printf("\n July \n");
         }
         else if(Month == 8)
         {
              printf("\n August \n");
         }
         else if(Month == 9)
         {
              printf("\n September \n");
         }
         else if(Month == 10)
         {
              printf("\n Octomber \n");
         }
         else if(Month == 11)
         {
              printf("\n November \n");
         }
         else if(Month == 12)
         {
              printf("\n December \n");
         }
         else
         {
              printf("\n\t Invalid Month");
         }

         getch();
         return 0;
}

