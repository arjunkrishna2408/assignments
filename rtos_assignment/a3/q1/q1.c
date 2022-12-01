#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	pid_t process_id;
	process_id = fork();

	if(process_id == -1){
		printf("Fork failed\n");
		return 1;
	}

	if(process_id == 0){
		printf("I am Child\n");
	} else {
		printf("I am Parent\n");
	}

	return 0;
}