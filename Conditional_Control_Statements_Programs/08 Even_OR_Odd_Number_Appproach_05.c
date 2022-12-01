#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;

        printf("\n Enter Your Number => ");
        scanf("%d",&Num);

       (Num%2 == 0)? printf("\n\t %d Is Neutral Number",Num):(Num%2 == 0)? printf("\n\t %d Is Even Number",Num):printf("\n\t %d Is Odd Number",Num);

        printf("\n Thanks...");

        getch();
        return 0;
}
