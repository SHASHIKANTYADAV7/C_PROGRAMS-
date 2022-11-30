#include<stdio.h>
#include<conio.h>

int main()
{
        int Rad = 0;
        float Pi = 3.14;
        float Area = 0;

        printf("\n\t Enter Radius Of Circle => ");
        scanf("%f",&Rad);

        Area = Pi * Rad * Rad;

        printf("\n\t Area Of Circle = %0.2f",Area);

        printf("\n\n\t============*******============");
        printf("\n\t\t\t Thanks...");

        getch();
        return 0;
}
