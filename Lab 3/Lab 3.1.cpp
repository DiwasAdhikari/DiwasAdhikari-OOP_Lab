// Lab 3 - Task 1
//Diwas Adhikari 
// 076BEI014
//Overloading ++ (pre & post-fix) using member function

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
		Complex operator++(){
								Complex x ;
								x.real = ++real ;
								x.img = ++img ;
								return x ;
							}		  
 		Complex operator++(int){
								Complex x ;
								x.real = real++ ;
								x.img = img++ ;
								return x ;
							}
		void display(){cout << "The number is " << real << " + " << img << "i. " << endl ; }		  
} ;

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
