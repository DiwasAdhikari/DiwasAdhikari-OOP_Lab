// Lab 3 - Task 4
//Diwas Adhikari 
// 076BEI014
//Overloading + operator for adding complex numbers using friend function

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
		
		void display()
		{
			cout << "The number is " << real << " + " << img << "i" << endl ;
		}
		
		friend Complex operator+(Complex a, Complex b) ;
} ;

Complex operator+(Complex a, Complex b)
{
	Complex c ;
	c.real = a.real + b.real ;
	c.img = a.img + b.img ;
	return c ;
}

int main()
{
	Complex a(1,2), b(3,4), c ;
	c = a+b ;
	c.display() ;
	
	return 0 ;
}
