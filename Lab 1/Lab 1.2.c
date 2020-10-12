 
// Lab 2 - Task 2
//Diwas Adhikari (076BEI014)
//Program in C to get and show 'n' students' data ...........

#define MAX 50
#include <stdio.h>

struct Student
{
	char name[20], address[20] ;
	int roll ;	
} ;

int main()
{
	struct Student s[MAX] ;
	int num, i;
	
	printf("Enter the number of students :- ") ;
	scanf("%d", &num) ;
	//Inputing data
	for(i=0 ; i<num; i++)
	{
		printf("Enter the details for student %d -> \n", i+1) ;
		printf("Name : ") ;
		scanf("%s", s[i].name) ;
		printf("Roll Number : ") ;
		scanf("%d", &s[i].roll) ;
		printf("Address : ") ;
		scanf("%s", s[i].address) ;
	}
	//Displaying data
	for(i=0; i<num; i++)
	{
		printf("The details for student %d are -> \n", i+1) ;
		printf("Name : %s \n", s[i].name) ;
		printf("Roll Number : %d \n", s[i].roll) ;
		printf("Address : %s \n", s[i].address) ;
	}
	
	return 0 ;
}
