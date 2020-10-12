
// Lab 2 - Task 4
//Diwas Adhikari (076BEI014)
//Inline Functions - CPP

#include <iostream>
using namespace std ;

inline int cube(int num)
{
	return num*num*num ;
}

int main()
{
	cout << "Number\tCube" << endl ;
	cout << "--------------" << endl ;
	
	for(int i=0 ; i<20; i++)
	{
		cout << i << "\t" << cube(i) << endl ;
	}
	
	return 0 ;
}
