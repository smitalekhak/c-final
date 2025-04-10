#include <iostream>
using namespace std;
class overload
{
public:
    void findMax(int a,int b)
    {
       if (a>b)
       {
           cout<<a<<" > "<< b <<endl;
       }
       else
       {
           cout<<b<<" > "<< a <<endl;
       }
    }
    void findMax(float a, float b)
    {
        if (a>b)
       {
           cout<<a<<" > "<< b <<endl;
       }
       else
       {
           cout<<b<<" > "<< a <<endl;
       }
    }
    void findMax(int a,int b,int c)
    {
        if (a>b && a>c)
       {
           cout<<a<<" > "<< b <<" and "<< c <<endl;
       }
       else if (b>a && b>c)
       {
           cout<<b<<" > "<< a<<" and "<< c <<endl;
       }
       else
       {
           cout<<c<<" > "<< b<<" and "<< a <<endl;
       }

    }
    void findMax(int a , float b)
    {
        cout<<a<<" > "<<b<<endl;
        cout<<b<<" > "<<a<<endl;
    }

};
int main()
{
    overload o1;
    o1.findMax(5,6);
    o1.findMax(2.2f,1.9f);
    o1.findMax(8,9,3);
    o1.findMax(4,5.5f);
return 0;
}

