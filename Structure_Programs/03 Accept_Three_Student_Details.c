#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
         int Roll_No;
         char Name[20];
         char City[6];
         float Per;
};

int main()
{
         struct student std1, std2, std3;

         printf("\n ============================ \n");

         printf("\n Enter Roll Number => ");
         scanf("%d",&std1.Roll_No);

         fflush(stdin);

         printf("\n Enter Name => ");
         gets(std1.Name);

         printf("\n Enter City Name => ");
         gets(std1.City);

         fflush(stdin);

         printf("\n Enter Percentage => ");
         scanf("%f",&std1.Per);

         printf("\n ===========================\n");

         printf("\n Enter Roll Number => ");
         scanf("%d",&std2.Roll_No);

         fflush(stdin);

         printf("\n Enter Name => ");
         gets(std2.Name);

         printf("\n Enter City Name => ");
         gets(std2.City);

         fflush(stdin);

         printf("\n Enter Percentage => ");
         scanf("%f",&std2.Per);

         printf("\n ===========================\n");

         printf("\n Enter Roll Number => ");
         scanf("%d",&std3.Roll_No);

         fflush(stdin);

         printf("\n Enter Name => ");
         gets(std3.City);

         fflush(stdin);

         printf("\n Enter Percentage => ");
         scanf("%f",&std3.Per);

         printf("\n ===========================\n");

        printf("\n\n 1st Student Details Given are => \n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std1.Roll_No,std1.Name,std1.City,std1.Per);
        printf("\n\n 2nd Student Details Given are => \n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std2.Roll_No,std2.Name,std2.City,std2.Per);
        printf("\n\n 3rd Student Details Given are => \n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std3.Roll_No,std3.Name,std3.City,std3.Per);

        printf("\n Thanks...");

        getch();
        return 0;
}
