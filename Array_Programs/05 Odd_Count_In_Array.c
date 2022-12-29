#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[7] = {'\0'}, i = 0, O_cnt = 0;

        printf("\n Enter Array Elements For Finding Odd Count => ");

        for(i = 0; i < 7; i++)
        {
             printf("\n Enter Array Elements %d = ",i+1);
             scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 7; i++)
        {
             if(Arr[i] % 2 ==  1)
             {
                  O_cnt++;
             }
        }

        printf("\n The Count Of Odd Numbers In Given Array = %d",O_cnt);

        printf("\n Thanks...");

        getch();
        return 0;
}
