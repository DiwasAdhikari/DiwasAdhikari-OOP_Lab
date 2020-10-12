
// Lab 2 - Task 3
// Diwas Adhikari (076BEI014)
//Program to add two complex numbers

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
		
		Complex operator+(Complex c)
		{
			Complex a ;
			a.real = real + c.real ;
			a.img = img + c.img ;
			return a ;
		}
		
		void display()
		{
			cout << "The number is " << real << " + " << img << "i" << endl ;
		}
} ;

int main()
{
	Complex a(2,7) , b(1,2), c ;
	c = a+b ;
	c.display() ;
	
	return 0 ;
}
