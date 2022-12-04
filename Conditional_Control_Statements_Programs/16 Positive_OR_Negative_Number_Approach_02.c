#include<stdio.h>
#include<conio.h>

int main()
{
       int Num = 0;

       printf("\n Enter Your Number => ");
       scanf("%d",&Num);

       if(Num == 0)
       {
            printf("\n %d Is Neutral Number",Num);
       }
       else if(Num > 0)
       {
            printf("\n %d Is Positive Number",Num);
       }
       else
       {
            printf("\n %d Is Negative Number",Num);
       }

           printf("\n Thanks...");

       getch();
       return 0;
}
