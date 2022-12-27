#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[5] = {0};

    printf("\n Enter Element No1 => ");
    scanf("%d",&Values[0]);

    printf("\n Enter Element No2 => ");
    scanf("%d",&Values[1]);

    printf("\n Enter Element No3 => ");
    scanf("%d",&Values[2]);

    printf("\n Enter Element No4 => ");
    scanf("%d",&Values[3]);

    printf("\n Enter Element No5 => ");
    scanf("%d",&Values[4]);

    getch();
    system("cls"); // clrscr(); Function To Clear Output Window

    printf("\n\n Elements In Array Are => \n\n");

    printf("\n Value Of 101 Element = %d",Values[0]);
    printf("\n Value Of 102 Element = %d",Values[1]);
    printf("\n Value Of 103 Element = %d",Values[2]);
    printf("\n Value Of 104 Element = %d",Values[3]);
    printf("\n Value Of 105 Element = %d",Values[4]);

    getch();
    return 0;
}
