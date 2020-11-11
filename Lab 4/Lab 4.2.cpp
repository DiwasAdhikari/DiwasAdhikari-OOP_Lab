Diwas Adhikari
//076BEI014
//Lab 4 - Task 2
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
        feet =0;
        inch  = 0;
    }
    operator float ()
    {
        float metres;
        metres = (feet*0.3048) + (inch*0.0254);
        return metres;
    }
    void input()
    {
        cout<<"Enter the distance in feet and inch: "<<endl ;
        cout <<"FEET: ";
        cin>>feet;
        cout<<"INCH : ";
        cin>>inch;
    }
};
int main()
{
    Distance d;
    float metres;
    d.input();
    metres = d;
    cout<<"The distance in meters is: "<< metres <<"m. "<<endl;
    return 0;
}
