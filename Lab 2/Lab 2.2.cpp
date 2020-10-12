
// Lab 2 - Task 2
// Diwas Adhikari (076BEI014)
//Program to get and display 'n' students' data

#define MAX 100
#include <iostream>

using namespace std ;

struct Student
{
	char name[20], address[20] ;
	int rollNo ;
} ;

class Register
{
	private :
		int n ;
		Student s[MAX] ;
	
	public :
		
		void input()
		{
			cout << "Enter the number of students :- " ;
			cin >> n ;
			cout << "\n" ;
			
			for(int i=0 ; i<n; i++)
			{
				cout << "Enter the details of the student " << i+1 << " :- " << endl ;
				cout << "Name -> " ;
				cin >> s[i].name ; 
				cout << "Address -> " ;
				cin >> s[i].address ;
				cout << "Roll No. -> " ;
				cin >> s[i].rollNo ;
			}
		}	
		
		void display()
		{
			for(int i=0; i<n; i++)
			{
				cout << "The details of the student "<< i+1 << " are :- " << endl ;
				cout << "Name -> " << s[i].name << endl ;
				cout << "Address -> " << s[i].address << endl ; 
				cout << "Roll No. -> " << s[i].rollNo << endl ;
			}
		}
	
} ;

int main()
{
	Register r ;
	r.input() ;
	r.display() ;
	
	return 0 ;
}
