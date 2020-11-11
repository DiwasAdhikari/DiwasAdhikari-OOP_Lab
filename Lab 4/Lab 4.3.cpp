#include<iostream>
#include<cmath>
#define PI 3.1415
using namespace std;
class polar
{
     float r;
     float theta;
public:
    polar()
    {
        r=0;
        theta = 0;
    }
    polar(float a,float b)
    {
        r = a;
        theta = b;
    }
    void showpolar()
    {
        cout<<"The coordinates in polar form :"<<endl;
        cout<<"r = "<<r<<" units"<<endl;
        cout<<"theta = "<<theta<<" degrees"<<endl;
    }
};
class cartesian
{
    float x;
    float y;
public:
    cartesian()
    {
        x = 0;
        y = 0;
    }
    cartesian(float p,float q)
    {
        x = p;
        y = q;
    }
    operator polar()
    {
        float radius = sqrt(pow(x,2)+ pow(y,2)) ;
        float angle =  (atan(y/x))*(180/PI);
        return polar(radius,angle);
    }
    void getcartesia()
    {
        cout<<"Enter x and y"<<endl;
        cin>>x>>y;
    }

};
int main()
{
    polar p1;
    cartesian c1;
    c1.getcartesia();
    p1 = c1;
    p1.showpolar();
    return 0;
}
