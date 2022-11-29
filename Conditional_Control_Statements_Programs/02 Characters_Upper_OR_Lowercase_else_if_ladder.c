#include<stdio.h>
#include<conio.h>

int main()
{
       char Ch = '\0';

       printf("\n Enter Your Character => ");
       scanf("%c",&Ch);

       if(Ch >= 'A' && Ch <= 'Z')
       {
             printf("\n %c Is Uppercase Letter",Ch);
       }
       else if(Ch >= 'a' && Ch <= 'z')
       {
             printf("\n %c Is Lowercase Letter",Ch);
       }
       else
       {
             printf("\n Invalid Letter...");
       }

             printf("\n Thanks...\n");

       getch();
       return 0;
}
