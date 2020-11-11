#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;
class cartesian
{
    float x;
    float y;
public:
    void getcartesian()
    {
        cout<<"Enter x and y coordinates "<<endl;
        cin>>x>>y;
    }
    float passx()
    {
        return x;

    }
    float passy()
    {
        return y;
    }
};
class polar
{
    float r;
    float theta;
public:
    polar()
    {
        r =0;
        theta = 0;
    }
    polar(cartesian c)
    {
        r = sqrt(pow(c.passx(),2)+ pow(c.passy(),2)) ;
        theta =  (atan(c.passy()/c.passx()))*(180/PI);
    }
    void showpolar()
    {
        cout<<"The polar coordinates are :"<<endl;
        cout<<" r = "<<r<<" units"<<endl;
        cout<<"Theta ="<<theta<<" degrees";
    }
};
int main()
{
    polar p1;
    cartesian c1;
    c1.getcartesian();
    p1 = c1;
    p1.showpolar();
    return 0;
}

