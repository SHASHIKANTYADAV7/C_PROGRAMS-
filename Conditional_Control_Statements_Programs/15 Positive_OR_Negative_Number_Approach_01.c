#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;

        printf("\n Enter Your Number => ");
        scanf("%d",&Num);

        if(Num > 0)
        {
               printf("\n\t %d Is Positive",Num);
        }
        else
        {
               printf("\n\t %d Is Negative",Num);
        }

               printf("\n Thanks...");

        getch();
        return 0;
}
