#include<iostream>
using namespace std;
class dist
{
    float feet;
    float inch;
    public:
        dist()
        {
            feet = 0;
            inch = 0;
        }
        dist(float m)
        {
           inch = m*3.28*12;
           if (inch >= 12)
           {
               int temp = int(inch/12);
               feet = temp;
               inch -= temp*12;
           }
        }
        void showfeet()
        {
            cout<<"The distance in feet and inch is "<<endl;
            cout<<feet<<" feet and "<<inch<<"inches"<<endl;
        }
} ;
int main()
{
    dist d;
    float m;
    cout<<"Enter the distance in meters"<<endl;
    cin>>m;
    d = m;
    d.showfeet();
    return 0;
}
