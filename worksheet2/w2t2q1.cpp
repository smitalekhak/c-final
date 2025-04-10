#include <iostream>
using namespace std;
class Circle
{
private:
    float radius1 , radius2 ;
    const float pi = 3.14;
    float area1, area2;
public:
    Circle()
    {
    radius1 = 0;
    radius2 = 0;
    }
    void input()
    {
        cout<<"ENTER RADIUS OF CIRCLE 1"<<endl;
        cin>>radius1;
        cout<<"ENTER RADIUS OF CIRCLE 2"<<endl;
        cin>>radius2;

    }
    void calculate()
    {
        area1= pi * radius1 * radius1;
        area2= pi * radius2 * radius2;
    }
    void display()
    {
        if (radius1>radius2)
        {
            cout<<"AREA OF CIRCLE 1 : "<<area1 <<endl;
            cout<<"AREA OF CIRCLE 2 : "<<area2 <<endl;
            cout<<"AREA OF CIRCLE 1 IS GREATER";
        }
        else {
            cout<<"AREA OF CIRCLE 1 : "<<area1 <<endl;
            cout<<"AREA OF CIRCLE 2 : "<<area2 <<endl;
            cout<<"AREA OF CIRCLE 2 IS GREATER";

        }
    }


};

int main()
{
    Circle c1;
    c1.input();
    c1.calculate();
    c1.display();
}
