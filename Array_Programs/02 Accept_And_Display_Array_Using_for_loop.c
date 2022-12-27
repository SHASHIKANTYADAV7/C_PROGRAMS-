#include<stdio.h>
#include<conio.h>

int main()
{
       int i = 0, Values[5] = {0};

       for(i = 0; i < 5; i++)
       {
           printf("\n Enter Element Number %d => ",i+1);
           scanf("%d",&Values[i]);
       }

       getch();

       printf("\n Elements In Array Are => \n\n");

       for(i = 0; i < 5; i++)
       {
            printf("\n Value Of %d Element = %d",101+1,Values);
       }

       getch();
       return 0;
}
