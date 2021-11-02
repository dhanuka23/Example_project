#include<stdio.h>
#include<stdlib.h>
float calAdditionalCharges(int ordertype,float subtotal);
float calTotalBil(float subtotal,float charges);
int main()
{
    int ordertype;
    float subtotal;

    printf("Enter your subtotal : ");
    scanf("%f",&subtotal);
    printf("Enter Order Type :");
    scanf("%d",&ordertype);
    if(ordertype!=1&&ordertype!=2&&ordertype!=3){printf("ERROR");getch();exit(0);}
    int charges=calAdditionalCharges(ordertype,subtotal);
    calTotalBil(subtotal,charges);

    getch();
    return 0;
}
float calAdditionalCharges(int ordertype,float subtotal)
{
    if(ordertype==1)
        {
            int charges;
            charges=subtotal*15/100+subtotal*10/100;
            return charges;
        }
    if(ordertype==2)
        {
            int charges;
            charges=subtotal*15/100;
            return charges;
        }
    if(ordertype==3)
        {
            int charges;
            charges=subtotal*15/100+subtotal*5/100;
            return charges;
        }
}
float calTotalBil(float subtotal,float charges)
{
    int totalbill;
    totalbill=subtotal+charges;
    printf("Your Total Bill amount is : %d",totalbill);
    return 0;
}
