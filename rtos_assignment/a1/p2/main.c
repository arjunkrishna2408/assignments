#include <stdio.h>
#include <stdlib.h>

int total(int arr[100], int size){
int sum = 0;
for(int i=0; i<size; i++){
		sum = sum + arr[i];
	}
	
	return sum;
}

int product(int arr[100], int size){
int product = 1;
for(int i=0; i<size; i++){
		product = product * arr[i];
	}
	
	return product;
}

int main() {

int arr[100];
int sum=0;
int prod=1;
int i = 0;

printf("enter the number: \n");
int tempvar = 0;
scanf("%d\n", &tempvar);

while(tempvar != 888){	
	arr[i]=tempvar;
	i++;
	scanf("%d", &tempvar);
}

sum = total(arr, i);
prod = product(arr, i);
float avg = (float) sum/i;

printf("average = %f", avg);
printf("sum = %d", sum);
printf("product = %d", prod);

return 0;
}