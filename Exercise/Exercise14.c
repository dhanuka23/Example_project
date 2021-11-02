#include <stdio.h>
void hapening(int uiLowest,int uiHighest);
int main(){
    int uiLowest;
    int uiHighest;

    printf("Enter the Lowest Limit of Perfect Numbers : ");
    scanf("%d",&uiLowest);
    printf("Enter the Highest Limit of Perfect Numbers : ");
    scanf("%d",&uiHighest);
    hapening(uiLowest,uiHighest);

    getch();
    return 0;
}
void hapening(int uiLowest,int uiHighest){


    for(uiLowest;uiLowest<=uiHighest;uiLowest++){

       int sum=0;

        for(int i=1;i<uiLowest;i++){

            int temp=uiLowest%i;
            if(temp==0){sum=sum+i;}
        }

        if(sum==uiLowest){printf("\t%d",uiLowest);}

    }

}
