#include<iostream>
using namespace std;
class dist
{
    float feet;
    float inch;
public:
    dist()
    {
        feet =0;
        inch  = 0;
    }
    operator float ()
    {
        float m;
        m = (feet*0.3048) + (inch*0.0254);
        return m;
    }
    void getdist()
    {
        cout<<"Enter the distance in feet and inch: "<<endl<<"feet:";
        cin>>feet;
        cout<<"inch: ";
        cin>>inch;
    }
};
int main()
{
    dist d;
    float m;
    d.getdist();
    m = d;
    cout<<"The distance in meters is: "<<m<<" m"<<endl;
    return 0;
}
