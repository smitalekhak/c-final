#include <iostream>
#include <fstream>
using namespace std;
class Vehicle
{
public:

    string regnum ;
    string color ;

    virtual void input() //usual input
    {
        cout << " Enter registration number: ";
        cin >> regnum;
        cout << " Enter color: ";
        cin>> color;

    }

    virtual ~Vehicle() {}

    void insertFile()
    {
        ofstream file("vehicle.txt");
        file<<" Registration: "<<regnum << "Color: "<<color<<endl;
        file.close();
    }

};
class Car : public Vehicle
{
public:
    int seats;
    void input() override
    {
    Vehicle::input(); //takes input as usual
    cout << "Enter number of seats: ";
    cin >> seats;
    }

    void writecar()
    {
    ofstream file("car.txt");
    file<<" Registration: "<<regnum << "Color: "<<color<< "Seats: "<<seats <<endl;
    file.close();
    }

    void displaycar()
    {
        cout << "\n--- Car Details ---\n";
        cout << "Registration: " << regnum << endl;
        cout << "Color: " << color << endl;
        cout << "Seats: " << seats << endl;
    }
};

class Bike:  public Vehicle
{
    public:
    int ecap;
    void input() override
    {
        Vehicle::input();
        cout<< "Enter engine capacity "<<endl;
        cin>>ecap;

    }
    void writebike()
    {
        ofstream file("bike.txt");
        file << "Registration: "<<regnum << "Color: "<<color<< "Engine Capacity:"<<ecap<<endl;
        file.close();

    }

    void displaybike()
    {
        cout << "\n--- Bike Details ---\n";
        cout << "Registration: " << regnum << endl;
        cout << "Color: " << color << endl;
        cout << "Engine Capacity: " << ecap << endl;

    }
};


int main()
{
    Car c ;
    Bike b;
    cout<<" FOR CAR "<<endl;
    c.input();
    c.writecar();
    c.displaycar();
    cout<<" FOR BIKE "<<endl;
    b.input();
    b.writebike();
    b.displaybike();


    return 0;

}
