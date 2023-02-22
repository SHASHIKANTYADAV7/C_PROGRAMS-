#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{

          int Roll_No;
          char Name[20];
          char City[9];
          float Per;
};

int main()
{
          int i = 0;
          struct student std[9];

          printf("\n\n Accepting Student Details => \n");

          for(i = 0; i <= 9; i++)
          {
               printf("\n Enter Roll Number => ");
               scanf("%d",&std[i].Roll_No);

               fflush(stdin);
               printf("\n Enter Name => ");
               gets(std[i].Name);

               printf("\n Enter City Name => ");
               gets(std[i].City);

               fflush(stdin);

               printf("\n Enter Percentage => ");
               scanf("%f",&std[i].Per);
          }

          getch();
          system("cls");

          printf("\n\n Displaying Student Details => ");

          for(i = 0; i <= 9; i++)
          {
                printf("\n *****Student %d Details***** \n Roll Number => %d \n Name => %s \n City Name => %s \n Percentage => %0.2f.",i+1,std[i].Roll_No,std[i].Name,std[i].City,std[i].Per);
          }

          printf("\n Thanks...");
          getch();
          return 0;
}
