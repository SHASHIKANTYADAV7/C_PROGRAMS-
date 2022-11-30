#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0;

       printf("\n Enter Your Number => ");
       scanf("%d",&Num);

       if(Num%2 == 0)
       {
             printf("\n\t %d Is Even",Num);
       }
       else
       {
             printf("\n\t %d Is Odd",Num);
       }

          printf("\n Thanks...");

       getch();
       return 0;
}
