#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {};
        int i = 0;

        puts("\n Enter A String => ");
        gets(cSrc);

        for(i = 0; i < 50; i++)
        {
             if(cSrc[i] == '\0')
             {
                  break;
             }
        }

        printf("\n Length Of Given String Is = %d",i);

        getch();
        return 0;
}
