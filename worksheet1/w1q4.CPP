#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter anynumber from 1-7"<<endl;
    cin>>number;
    if (number==1)
    {
        cout<<"SUNDAY";
    }
    else if (number==2)
    {
        cout<<"MONDAY";
    }
    else if (number==3)
    {
        cout<<"TUESDAY";
    }
    else if (number==4)
    {
        cout<<"WEDNESDAY";
    }
    else if (number==5)
    {
        cout<<"THURSDAY";
    }
    else if (number==6)
    {
        cout<<"FRIDAY";
    }
    else if (number==7)
    {
        cout<<"SATURDAY";
    }
    else
    {
        cout<<"INVALID ENTER NUMBER BETWEEN 1-7";
    }
    return 0;
}
