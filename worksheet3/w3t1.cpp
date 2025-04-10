#include <iostream>
using namespace std;
class Time
{
private:
    int hrs , mins;
public:
    Time ()
    {
        hrs=0;
        mins=0;
    }
    void sett(int h , int m)
    {
        if (h>=24  || h<0 || m<0  || m>=60)
        {
            cout << "INVALID TIME "<<endl;
        }
        else
        {
            hrs= h;
            mins= m;
        }
    }
    Time operator+(Time t)
    {
        Time res;
        int totalmin = mins + t.mins;
        int totalhrs = hrs + t.hrs + (totalmin / 60 );
        res.hrs = totalhrs % 24;
        res.mins = totalmin % 60;
        return res;

    }

    bool operator>(Time t)
    {
          if (hrs > t.hrs)
            return true;
        else if (hrs == t.hrs && mins > t.mins)
            return true;
        else
            return false;

    }

    void display ()
    {
        cout<< hrs << "hours and "<<mins<< " minutes "<<endl;
    }

};


int main()
{
    Time t1, t2 , result;
    t1.sett(10,30);
    t2.sett(3,46);
    result = t1+t2;
    cout<<"RESULT OF ADDING ";
    result.display();

    if (t1 > t2) {
        cout << "t1 is greater than t2" << endl;
    } else {
        cout << "t2 is greater than t1" << endl;
    }
return 0;
}
