#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

struct stud1{
	int rollnumber;
	char name[20];
	int marks[5];
};

typedef struct stud1 student;

int main(){
	student s[SIZE];

	for(int i=0; i<SIZE; i++){
		printf("Enter the roll number of student %d\n",i+1 );
		scanf("%d", &s[i].rollnumber);

		printf("Enter the name\n");
		scanf("%s", s[i].name);

		for(int j=0;j<5;j++){
			printf("Enter marks of subject %d ",j+1);
			scanf("%d", &s[i].marks[j]);
		}
	}

	printf("Student scored more that 80 marks in all subjects: \n");
	for(int i=0;i<SIZE;i++){
		if(s[i].marks[0]>=80 && s[i].marks[1]>=80 && s[i].marks[2]>=80 && s[i].marks[3]>=80 && s[i].marks[4]>=80){
			printf("%s\n", s[i].name);
		}
	}
}