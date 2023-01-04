#include<stdio.h>
#include<conio.h>

int main()
{
       char cSrc[50] = {'\0'};
       int i = 0;

       puts("\n Enter A string => ");
       gets(cSrc);

       while(cSrc[i] != '\0')
       {
            if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
            {
                cSrc[i] = cSrc[i] - 32;
            }
            else if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
            {
                cSrc[i] = cSrc[i] + 32;
            }
            i++;
       }

       printf("\n\t Given Number Toogle Case = %s",cSrc);

       getch();
       return 0;
}
