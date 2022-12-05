#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 0;

        Up:
        printf("\n Enter Your Number => ");
        scanf("%d",&Num);

        if(Num == 0)
        {
               printf("\n %d Is Neutral Number.\n\t Please Enter Another Number");
               goto Up;
        }
        (Num > 0)? printf("\n %d Is Positive Number",Num): printf("\n %d Is Negative Number",Num);

               printf("\n Thanks...");

        getch();
        return 0;
}
