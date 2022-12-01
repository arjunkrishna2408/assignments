#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10][10];
	int row=0, column=0;
	int oddnum=0, evennum=0;
	int oddarr[20], evenarr[20];
	 printf("enter the no of rows: ");
	 scanf("%d", &row);
	 printf("enter the no of columns: ");
	 scanf("%d", &column);
	 printf("enter the array elements: ");

	 for(int i=0;i<row;i++){
	 	for(int j=0;j<column;j++){
	 		scanf("%d",&a[i][j]);
	 	}
	 }

	 for(int i=0;i<row;i++){
	 	for(int j=0;j<column;j++){
	 		if(a[i][j]%2==0){
	 			evennum++;
	 			evenarr[evennum-1]=a[i][j];
	 		} else{
	 			oddnum++;
	 			oddarr[oddnum-1]=a[i][j];
	 		}
	 	}
	 }

	 printf("Odd numbers: ");

	 for(int i=0;i<oddnum;i++){
	 		printf("%d", oddarr[i]);
	 }

	 printf("\nEven numbers: ");
	 for(int i=0;i<evennum;i++){
	 		printf("%d", evenarr[i]);
	 }

	return 0;
}