//Diwas Adhikari
//076BEI014
//Lab 4 - Task 1
//Conversion from user-defined to basic type

#include<iostream>
using namespace std;

class Distance
{
    float feet;
    float inch;
    public:
        Distance()
        {
            feet = 0;
            inch = 0;
        }
        Distance(float metres)
        {
           inch = metres*3.28f*12.0f;
           if (inch >= 12)
           {
               int temp = int(inch/12);
               feet += temp;
               inch -= temp*12;
           }
        }
        void display()
        {
            cout<<"The distance is -> "<< endl;
            cout<<"FEET : " << feet << endl ;
            cout<<"INCH : " << inch << endl;
        }
} ;

int main()
{
    Distance d ;
    float metres ;
    cout<<"Enter the distance in metres -> "<<endl;
    cin>>metres;
    d = metres;
    d.display();
    return 0;
}
