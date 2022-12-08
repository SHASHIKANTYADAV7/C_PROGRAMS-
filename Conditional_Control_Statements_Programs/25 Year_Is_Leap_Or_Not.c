#include<stdio.h>
#include<conio.h>

int main()
{
       int Year = 0;

       printf("\n Enter Year => ");
       scanf("%d",&Year);

       if(Year %4 == 0)
       {
            printf("\n\t %d Is Leap Year",Year);
       }
       else
       {
            printf("\n\t %d Is Not Leap Year",Year);
       }

            printf("\n\t Thanks...");

       getch();
       return 0;
}
