#include<stdio.h>
#include<conio.h>

int main()
{
       int Arr[5] = {23, 55, 66, 77, 88};

       printf("\n\n The Value Of 0th Number = %d",Arr[0]);
       printf("\n\n The value of 1st Number = %d",Arr[1]);
       printf("\n\n The Value Of 2nd Number = %d",Arr[2]);

       getch();
       system("cls");

       printf("\n\n Enter Value For 0th Number => ");
       scanf("\%d",&Arr[0]);
       printf("\n\n Enter value For 1st Number => ");
       scanf("%d",&Arr[1]);
       printf("\n\n Enter Value FOr 2nd Number => ");
       scanf("%d",&Arr[2]);

       Arr[0] = 34;
       Arr[1] = 45;
       Arr[2] = 43;

       printf("\n\n The Value Of 0th Number = %d",Arr[0]);
       printf("\n\n The value of 1st Number = %d",Arr[1]);
       printf("\n\n The Value Of 2nd Number = %d",Arr[2]);
       printf("\n\n The Value Of 3rd Number = %d",Arr[3]);
       printf("\n\n The value of 4th Number = %d",Arr[4]);

       printf("\n Thanks...");

       getch();
       return 0;
}
