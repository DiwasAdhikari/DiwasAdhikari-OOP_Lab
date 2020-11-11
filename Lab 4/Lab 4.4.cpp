//Diwas Adhikari
//076BEI014
//Lab 4 - Task 4
//Conversion subroutine in destination class

#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;

class Cartesian
{
    float x;
    float y;
public:
    void input()
    {
        cout<<"Enter the coordinates -> "<<endl;
        cout<<"X: " ;
        cin >> x ;
        cout<<"Y: " ;
        cin >> y ;
    }
    float getX()
    {
        return x;

    }
    float getY()
    {
        return y;
    }
};

class Polar
{
    float r;
    float angle;
public:
    Polar()
    {
        r =0;
        angle = 0;
    }
    Polar(Cartesian c)
    {
        r = sqrt(pow(c.getX(),2)+ pow(c.getY(),2)) ;
        angle =  (atan(c.getY()/c.getX()))*(180/PI);
    }
    void showpolar()
    {
        cout<<"The polar coordinates are :"<<endl;
        cout<<"r = "<<r<<" units"<<endl;
        cout<<"Angle ="<<angle<<" degrees"<<endl;
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

