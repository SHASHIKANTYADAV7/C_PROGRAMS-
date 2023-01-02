#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {'\o'};
        int i = 0, Cnt = 0;

        puts("\n Enter A String => ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
             if(cSrc[i] = '\0')
             {
                  Cnt++;
             }
             i++;
        }

        printf("\n Display String => %d",cSrc);

        getch();
        return 0;
}
