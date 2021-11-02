#include<stdio.h>
#include<stdlib.h>
float findIncreasePercent(int category);
float findNewPrice(int percentage,float price);
int main()
{
    float oldprice;
    int productcategory;

    printf("Enter Product Price : ");
    scanf("%f",&oldprice);

    printf("Product Category : ");
    scanf("%d",&productcategory);

    if(productcategory!=1&&productcategory!=2&&productcategory!=3)
        {printf("ERROR");getch();exit(0);}

    int productpercentage=findIncreasePercent(productcategory);

    findNewPrice(productpercentage,oldprice);


 getch();
 return 0;
}
float findIncreasePercent(int category)
{
    if(category==1){return 10;}
    else if(category==2){return 15;}
    else if(category==3){return 20;}


}
float findNewPrice(int percentage,float price)
{
    float newprice;
    newprice=price+price*(percentage/100.00);
    printf("New Price is : %0.2f",newprice);
    return 0;
}



