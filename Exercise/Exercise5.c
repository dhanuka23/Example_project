#include<stdio.h>
main()
{

    int a=1,b=1,d=1,e=1,f=1,g=1,h=1,i=1;
    int c=1;
    while(c<=10)
        {
          a=c*1;b=c*2;d=c*3;e=c*4;f=c*5;g=c*6;h=c*7;i=c*8;
          printf("1*%d=%d , 2*%d=%d , 3*%d=%d , 4*%d=%d , 5*%d=%d , 6*%d=%d , 7*%d=%d , 8*%d=%d \n",c,a,c,b,c,d,c,e,c,f,c,g,c,h,c,i);
          c++;
        }
    getch();
}
