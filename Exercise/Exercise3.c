#include<stdio.h>
main()
{

    int marks[10];
    int sum;
    int count=1;

     printf("Enter your 1st mark :");
     scanf("%d",&marks);
     sum=sum+marks;

     while(marks>=0)
     {
        printf("Total is : %d\n",sum);
        printf("Enter your %dst mark :",count+1);
        scanf("%d",&marks);
        sum=sum+marks;
        count++;
     }


    getch();
}
