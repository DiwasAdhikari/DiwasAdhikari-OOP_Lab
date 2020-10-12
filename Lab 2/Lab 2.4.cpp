
// Lab 2 - Task 4
// Diwas Adhikari (076BEI014)
//Constructors & Destructors


#include <iostream>

using namespace std ;

class Vector
{
	private : 
		int x, y ;
		
	public :
		Vector() //default
		{
			x = 0 ;
			y = 0 ;
		}
		
		~Vector() //destructor
		{
			cout << "Destroyed !" << endl ;
		}
		
		Vector(int a, int b) //parameterized
		{
			x = a ;
			y = b ;
		}
		
		Vector(Vector &v) //copy 
		{
			x = v.x ;
			y = v.y ; 
		}
		
		void display()
		{
			cout << "The vector is " << x << "i + " << y << "j" << endl ;  
		}
		
				
} ;

int main()
{
	Vector a, b(1,2), c(a) ;
	a.display() ;
	b.display() ;
	c.display() ; 
}
