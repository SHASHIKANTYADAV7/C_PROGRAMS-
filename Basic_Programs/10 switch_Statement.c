#include<stdio.h>
#include<conio.h>

int main()
{
       int Day = 0;

       printf("\n Enter Number Of Weeks (1-7) => ");
       scanf("%d",&Day);

       switch(Day)
       {
            Case1:
            printf("\n Monday \n");
            break;

            Case2:
            printf("\n Tuesday \n");
            break;

            Case3:
            printf("\n Wednesday \n");
            break;

            Case4:
            printf("\n Thursday \n");
            break;

            Case5:
            printf("\n Friday \n");
            break;

            Case6:
            printf("\n Saturday \n");
            break;

            Case7:
            printf("\n Sunday \n");
            break;

            defalut:
            printf("\n In Valid Input...");
       }

       getch();
       return 0;
}
