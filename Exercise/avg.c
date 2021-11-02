#include<stdio.h>
main()
{
int num1;
float news;
float new1,old1;
printf("Enter the Amount of 2019/2020 : \n");
scanf("%d",&num1);
printf("Enter New Syllabus Precentage : \n");
scanf("%f",&news);
printf("Old Syllabus Precentage : %0.1f\n",100-news);



//calculation

new1=(num1*news)/100;
old1=(num1*(100.0-news))/100;

printf("\nNew Syllabus students in 2020/2021 : %0.2f\n",new1);
printf("\nOld Syllabus students in 2020/2021 : %0.2f\n",old1);


getch();
}
