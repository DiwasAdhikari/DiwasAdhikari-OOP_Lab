
// Lab 2 - Task 3
//Diwas Adhikari (076BEI014)
//Function Overloading - CPP

#define PI 3.1414
#include <iostream>
using namespace std ;
//For circle
float area(float a)
{
	return PI*a*a ;
}
//For rectangle
float area(float a, float b)
{
	return a*b ;
}

int main()
{
	cout << "The area of circle is " << area(5) << endl ; 	
	cout << "The area of rectangle is " << area(5,6) << endl ;
	
	return 0 ;
}
