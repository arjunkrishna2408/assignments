#include <stdio.h>
#include <stdlib.h>

int total(int arg[10]){
int sum = 0;
for(int i=0; i<10; i++){
		sum = sum + arg[i];
	}
	
	return sum;
}

int product(int arg[10]){
int product = 1;
for(int i=0; i<10; i++){
		product = product * arg[i];
	}
	
	return product;
}

int main(int argc, char **argv) {
int arr[10];
int sum=0;
int prod=0;
for(int i=1; i<=10; i++){
	arr[i-1]=atoi(argv[i]);
	}

sum = total(arr);
prod = product(arr);
float avg = sum/10.0;

printf("sum = %d", sum);
printf("product = %d", prod);
printf("product = %f", avg);
}
