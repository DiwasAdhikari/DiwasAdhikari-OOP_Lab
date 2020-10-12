
// Lab 2 - Task 1
// Diwas Adhikari (076BEI014)
//Program to get and display a student's data

#include <iostream>

using namespace std ;

class Student
{
	private :
		char name[20], address[20] ;
		int rollNo ;
		
	public :
		
		void input()
		{
			cout << "Enter the details of the student :- " << endl ;
			cout << "Name -> " ;
			cin >> name ; 
			cout << "Address -> " ;
			cin >> address ;
			cout << "Roll No. -> " ;
			cin >> rollNo ;
		}	
		
		void display()
		{
			cout << "The details of the students are :- " << endl ;
			cout << "Name -> " << name << endl ;
			cout << "Address -> " << address << endl ; 
			cout << "Roll No. -> " << rollNo << endl ;
		}
	
} ;

int main()
{
	Student s ;
	s.input() ;
	s.display() ;
	
	return 0 ;
}
