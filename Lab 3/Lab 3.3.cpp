// Lab 3 - Task 3
//Diwas Adhikari 
// 076BEI014
//Overloading + operator for adding complex numbers using member function

#include <iostream>
using namespace std ;

class Complex
{
	private :
		int real, img ;
		
	public :
		Complex()
		{
			real = 0 ;
			img = 0 ;
		}
		
		Complex(int a, int b)
		{
			real = a ;
			img = b ;
		}
		
		Complex operator+(Complex a)
		{
			Complex c ;
			c.real = real + a.real ;
			c.img = img + a.img ;
			return c ;
		}
		
		void display()
		{
			cout << "The number is " << real << " + " << img << "i" << endl ;
		}
} ;

int main()
{
	Complex a(1,2), b(3,4), c ;
	c = a+b ;
	c.display() ;
	
	return 0 ;
}
