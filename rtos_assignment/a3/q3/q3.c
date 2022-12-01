#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int sum = 0, i, n, num, fork_val;
	
	fork_val=fork();

	while(1){
		if(fork_val == 0){
			printf("Enter the value of n:");
			scanf("%d", &n);
			int arr[n];
			for(i=0; i<n; i++){
				printf("Enter %d element: ",i+1);
				scanf("%d", &arr[i]);	
			}
			// if(n>0){
			for(i=0; i<n; i++){
				sum += arr[i];
			}
			printf("Sum is: %d\n", sum);
			break;
		}
	}
	return 0;
}