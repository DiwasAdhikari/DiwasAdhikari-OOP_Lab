
// Lab 2 - Task 5
//Diwas Adhikari (076BEI014)
//Default Arguments - CPP

#include <iostream>
using namespace std ;

float velocity(float distance = 10.0, float time = 5.0)
{
	return distance/time ;
}

int main()
{
	cout << "The velocity is " << velocity() << endl ; //Default
	cout << "The velocity is " << velocity(15.0) << endl ; //One argument overridden
	cout << "The velocity is " << velocity(20.0 ,5.0) << endl ; //All arguments overridden
	
	return 0 ;
}
