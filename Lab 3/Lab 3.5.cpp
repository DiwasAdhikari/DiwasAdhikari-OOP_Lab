// Lab 3 - Task 5
//Diwas Adhikari 
// 076BEI014
//Overloading * operator for product of two matrices using friend function

#include <iostream>
using namespace std ;

class Matrix
{
	private :
		int m, n, arr[20][20] ;
		
	public :
		void input(char matName)
		{
			cout << "Enter the order of the matrix (m*n) : " << endl ;
			cout << "m -> " ;
			cin >> m ;
			cout << "n -> " ;
			cin >> n ;
			
			cout << "Enter the elements for matrix " << matName << " : " << endl ;
			for(int i=0; i<m; i++)
			{
				for(int j=0; j<n; j++)
				{
					cout << matName << i << j << " -> " ;
					cin >> arr[i][j] ;
				}
			}
			
		}
		
		void display(const char *caption)
		{
			cout << caption << endl ;
			
			for(int i=0; i<m; i++)
			{
				for(int j=0; j<n; j++)
				{
					cout << arr[i][j] << "\t" ;
					
					if(j == n-1 )
					{
						cout << "\n" ;
					}
				}
			}
		}
		
		friend Matrix operator*(Matrix a, Matrix b) ;
	
} ;

Matrix operator*(Matrix a, Matrix b) 
{
			Matrix product ;
			product.m = a.m ;
			product.n = b.n ;
			
			if(a.n != b.m)
			{
				cout << "\n!!!!!!!!! MATHEMATICAL ERROR !!!!!!! " << endl ;
				exit(1) ;
			}
			else
			{
			for(int i=0; i<a.m; i++)
			{
				for(int j=0; j<b.n; j++)
				{
					product.arr[i][j] = 0 ;
					
					for(int k=0; k<a.n; k++)
					{
						product.arr[i][j] += a.arr[i][k]*b.arr[k][j] ;
					}
				}
			}
			return product ;
			}
}

int main()
{
	Matrix a, b, c ;
	a.input('A') ;
	b.input('B') ;
	c = a*b ; 
	c.display("\nThe product matrix is : ") ;
	
	return 0 ;
}
