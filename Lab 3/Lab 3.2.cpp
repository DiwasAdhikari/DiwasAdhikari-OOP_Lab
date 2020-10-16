// Lab 3 - Task 2
//Diwas Adhikari 
// 076BEI014
//Overloading ++ (pre & post-fix) using friend function

#include <iostream>

using namespace std ;

class Complex
{
	private:
		int real, img ;
		
	public:
		Complex(){real = 0 ; 
 				  img  = 0 ;}
 		Complex(int a, int b){real = a ;
 				  		      img  = b ;}						 
		
		friend Complex operator++(Complex c) ;
		friend Complex operator++(Complex c, int) ;
		
		void display(){cout << "The number is " << real << " + " << img << "i. " << endl ; }		  
} ;

Complex operator++(Complex c){
							Complex x ;
							x.real = ++c.real ;
							x.img = ++c.img ;
							return x ;
					}		  
Complex operator++(Complex c, int){
							Complex x ;
							x.real = c.real++ ;
							x.img = c.img++ ;
							return x ;
					   }

int main()
{
	Complex a(1,1), b , c ;
	b = ++a ;
	c = a++ ;
	a.display() ;
	b.display() ;
	c.display() ;
	
	return 0 ;	
}
