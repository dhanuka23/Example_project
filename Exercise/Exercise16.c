#include<stdio.h>
#define Size 10
int main(){

    int intArr[Size];
    int positiveNum[Size];
    int negativeNum[Size];
    int i;

    printf("Enter 10 Numbers : \n");
    for(i=0;i<Size;i++){
        scanf("%d",&intArr[i]);
    }

    printf("Number Series : ");
    for(i=0;i<Size;i++){
        printf("%d ",intArr[i]);
    }
    printf("\nPositive Numbers : ");
    for(i=0;i<Size;i++){
        if(intArr[i]>0){
            positiveNum[i]=intArr[i];
            printf("%d ",positiveNum[i]);
        }
    }
    printf("\nNegative Numbers : ");
    for(i=0;i<Size;i++){
        if(intArr[i]<0){
            negativeNum[i]=intArr[i];
            printf("%d ",negativeNum[i]);
        }
    }




    getch();
    return 0;
}
