#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
        int i = 0;

        puts("\n Enter A String => ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
             cDest[i] = cSrc[i];
             i++;
        }
             cDest[i] = '\0';

        printf("\n Original String Is = %s",cSrc);
        printf("\n Copied String Is = %s",cDest);

        getch();
        return 0;
}
