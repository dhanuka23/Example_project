#include<stdio.h>
int main(){
	int numArr[6]={0};    //variable declaration
	int oddNum[6]={0};
	int evenNum[6]={0};
	int i=0;

	printf("Enter 6 Numbers : \n");

	for(i=0;i<6;i++){
        scanf("%d",&numArr[i]);
	}

    printf("Number Series : ");
    for(i=0;i<6;i++){
        printf("%d ",numArr[i]);
    }

	printf("\nOdd Numbers : ");

	for(i=0;i<6;i++){
        if(numArr[i]%2==1){
            oddNum[i]=numArr[i];
            printf("%d ",oddNum[i]);
        }
	}

	printf("\nEven Numbers : ");

    for(i=0;i<6;i++){
        if(numArr[i]%2==0){
            evenNum[i]=numArr[i];
            printf("%d ",evenNum[i]);
        }
	}


	getch();
	return 0;
}
