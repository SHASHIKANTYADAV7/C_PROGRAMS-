#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[5] = {'\0'}, i = 0, Z_cnt = 0;

        for(i = 0; i < 5; i++)
        {
             printf("\n Enter Array Element %d => ",i+1);
             scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 5; i++)
        {
             if(Arr[i] == 0)
             {
                 Z_cnt++;
             }
        }

        printf("\n Zerp Count In Given Array Element Is %d.",Z_cnt);

        getch();
        return 0;
}
