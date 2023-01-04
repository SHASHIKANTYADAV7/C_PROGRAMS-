#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {'\0'};
        int i = 0, Cnt = 0;

        puts("\n Enter A Number => ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
             if(cSrc[i] >= '0' && cSrc[i] <= '9')
             {
                 Cnt++;
             }
             i++;
        }

        printf("\n Digits String In Given Number Count %d",cSrc);

        getch();
        return 0;
}
