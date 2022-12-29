#include<stdio.h>
#include<conio.h>

int main()
{
       int Arr[5] = {'\0'}, i = 0, E_cnt = 0;

        printf("\n Enter Array Elements For Finding Even Count => ");

        for(i = 0; i < 5; i++)
        {
             printf("\n Enter Array Elements %d = ",i+1);
             scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 5; i++)
        {
             if(Arr[i] % 2 == 0)
             {
                  E_cnt++;
             }
        }

        printf("\n The Count Of Even Numbers In Given Array = %d",E_cnt);

        printf("\n Thanks...");

        getch();
        return 0;
}

