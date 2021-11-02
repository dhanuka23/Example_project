#include<stdio.h>
int calculations(int array[5],int a);
int main(){

    int ui;
    int i=0;


    printf("How many Elements do you want to store in the array :");
    scanf("%d",&ui);

    int temp[ui];

    printf("-----------------------------------");
    printf("\n\n\tLet\'s Enter Elements\n\n");

    while (i<ui){
    printf("Element - %d : ",i);
    scanf("\n%d",&temp[i]);
    i=i+1;
    }
    int big;
    big=calculations(temp,ui);

    printf("\n\nLargest Element is : %d",big);

    getch();
    return 0;
}
int calculations(int array[5],int a){


    int i=1;
    int maxi;
    maxi=array[0];


    while (i<a){


        if(maxi<array[i]){
            maxi=array[i];
        }
        i++;
    }
    return maxi;
}
