//Diwas Adhikari
//076BEI014
//Lab 4 - Task 3
//Conversion subroutine in source class

#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;
class Polar
{
     float r;
     float angle;
public:
    Polar()
    {
        r=0;
        angle = 0;
    }
    Polar(float a,float b)
    {
        r = a;
        angle = b;
    }
    void display()
    {
        cout<<"The coordinates in polar form : "<<endl;
        cout<<"r = "<< r <<endl;
        cout<<"Angle = "<< angle <<" degrees"<<endl;
    }
};
class Cartesian
{
    float x;
    float y;
public:
    Cartesian()
    {
        x = 0;
        y = 0;
    }
    Cartesian(float p,float q)
    {
        x = p;
        y = q;
    }
    operator Polar()
    {
        float radius = sqrt(pow(x,2)+ pow(y,2)) ;
        float angle =  (atan(y/x))*(180/PI);
        return Polar(radius,angle);
    }
    void input ()
    {
        cout <<"Enter the co-ordinates -> "<<endl;
        cout <<"X: " ;
        cin >> x ;
        cout <<"Y: " ;
        cin >> y ;
    }

};
int main()
{
    Polar p;
    Cartesian c;
    c.input();
    p = c ;
    p.display();
    return 0;
}
