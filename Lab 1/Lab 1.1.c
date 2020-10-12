
//Lab 1 - Task 1

// Program in C to add two complex numbers using structures
//Diwas Adhikari (076BEI014)

#include <stdio.h>

struct Complex
{
	int real, img ;
} ;

struct Complex add(struct Complex a,struct Complex b)
{
	struct Complex c ;
	c.real = a.real + b.real ;
	c.img = a.img + b.img  ;
	
	return c ;
}

int main()
{

	struct Complex a = {1,2} ; //Complex number declared .......(Explicitly)
	struct Complex b = {2,3} ;
	struct Complex c ;
	c = add(a,b) ;
	printf("The sum is %d + %di", c.real, c.img) ;
	
	return 0 ;
}
