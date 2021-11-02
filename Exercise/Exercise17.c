#include<stdio.h>
#define Size 10
int main(){

    int myArray[Size];
    int largeNum[Size];
    int i;
    int sum;
    float avg;


    printf("Enter 10 Numbers : \n");

    for(i=0;i<Size;i++){
        scanf("%d",&myArray[i]);
        sum=sum+myArray[i];
    }

    avg=sum/Size;

    printf("\nAverage : %0.1f",avg);

    printf("\nMy Array : ");
    for(i=0;i<Size;i++){
        printf("%d ",myArray[i]);
    }

    printf("\nLarge Num : ");
    for(i=0;i<Size;i++){
        if(myArray[i]>avg){
            largeNum[i]=myArray[i];
            printf("%d ",largeNum[i]);
        }
    }






    getch();
    return 0;
}
