#include<stdio.h>
main()
{
    int a,b,c,d,e,f,g,h,i,j;
    int sum=0;
    int num[10]={1,2,4,8,16,32,64,128,256,1024};

    printf("Enter your 10 digit Binary number : \n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    if (a!=0){sum=sum+num[9];}
       else {sum=sum+0;}
    if (b!=0){sum=sum+num[8];}
       else {sum=sum+0;}
    if (c!=0){sum=sum+num[7];}
       else {sum=sum+0;}
    if (d!=0){sum=sum+num[6];}
       else {sum=sum+0;}
    if (e!=0){sum=sum+num[5];}
       else {sum=sum+0;}
    if (f!=0){sum=sum+num[4];}
       else {sum=sum+0;}
    if (g!=0){sum=sum+num[3];}
       else {sum=sum+0;}
    if (h!=0){sum=sum+num[2];}
       else {sum=sum+0;}
    if (i!=0){sum=sum+num[1];}
       else {sum=sum+0;}
    if (j!=0){sum=sum+num[0];}
       else {sum=sum+0;}

     printf("Your Decimal number : %d ",sum);
    getch();
}
