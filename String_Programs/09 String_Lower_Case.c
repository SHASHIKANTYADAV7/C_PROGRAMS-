#include<stdio.h>
#include<conio.h>

int main()
{
       char cSrc[50] = {'\0'};
       int i = 0;

       puts("\n Enter A Words => ");
       gets(cSrc);

       while(cSrc[i] != '\0')
       {
             if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
             {
                  cSrc[i] = cSrc[i] + 32;
             }
             i++;
       }

       printf("\n Lower Case Count Number => %s",cSrc);

       getch();
       return 0;
}


