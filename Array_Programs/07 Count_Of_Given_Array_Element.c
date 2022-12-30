#include<stdio.h>
#include<conio.h>

int main()
{
       int Arr[7] = {'\0'}, i = 0, Cnt = 0, No = 0;

       for(i = 0; i < 7;i++)
       {
            printf("\n Enter Element %d = ",i+1);
            scanf("%d",&Arr[i]);
       }

       printf("\n Enter Number For Count = ");
       scanf("%d",&No);

       for(i = 0; i < 7; i++)
       {
            if(Arr[i] == No)
            {
                 Cnt++;
            }
       }

       printf("\n The Count Of %d Number = %d",No,Cnt);

       getch();
       return 0;
}
