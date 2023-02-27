#include<stdio.h>
#include<conio.h>
#include<string.h>

#define Count 20

struct Student
{
        int Roll_No;
        char Name[20];
        char City[10];
        float Per;
};

int main()
{
        int i = 0;
        struct Student Std[Count];

        for(i = 0; i <= Count; i++)
        {
                printf("\n Enter Roll Number => ");
                scanf("%d",&Std[i].Roll_No);

                fflush(stdin);

                printf("\n Enter Name => ");
                gets(Std[i].Name);

                printf("\n Enter City Name => ");
                gets(Std[i].City);

                fflush(stdin);

                printf("\n Enter Percentage => ");
                scanf("%f",&Std[i].Per);
        }

        getch();
        system("cls");

        for(i = 0; i <= Count; i++)
        {
                printf("\n\n *******Student %d Details*****\n Roll Number => %d.\n Name => %s.\n City => %s.\n Percentage => %0.2f.",i+1,Std[i].Roll_No,Std[i].Name,Std[i].City,Std[i].Per);
        }

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
