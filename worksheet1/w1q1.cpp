#include <iostream>
using namespace std;
class temp
{
    private:
    float temp_value, result;
    int choice;
    public:

    void getdata()
    {
        cout<<"Enter the temperature"<<endl;
        cin>>temp_value;
    }
    void convert()
    {
        cout<<"will the temperature be Fahrenheit or Celsius(type '1' for Fahrenheit and '2' for Celsius)"<<endl;
        cin>>choice;
        if (choice==1)
         {
           result=(temp_value - 32)/1.8;

         }
        else if (choice==2)
         {
             result= (1.8 * temp_value)+32;
         }
        else
        {
        cout<<"Invalid input please enter '1' or '2'"<<endl;
        }
    }

    void display()
    {
        cout<<"The result after conversion will be "<<result<<endl;
    }

};

int main()
{
    temp t;
    t.getdata();
    t.convert();
    t.display();
    return 0;
}
