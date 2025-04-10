#include <iostream>
#include <string>
using namespace std;
class student
{
private:
float mark1,mark2,mark3,total,avg,percent;
string name;
char grade;
public:
void takeinput()
{
    cout<<"Enter your full name"<<endl;
    getline(cin,name);
    cout<<"Enter marks of Subject 1 out of 100"<<endl;
    cin>>mark1;
    cout<<"Enter marks of Subject 2 out of 100"<<endl;
    cin>>mark2;
    cout<<"Enter marks of Subject 3 out of 100"<<endl;
    cin>>mark3;
}

void calculate()
{
    total = mark1 + mark2 + mark3;
    avg = total/3;
    percent = (total / 300 )*100;
    if (percent>=90)
    {
        grade = 'A';
    }
    else if (percent>=80)
    {
        grade = 'B';
    }
    else if (percent>=70)
    {
        grade = 'C';
    }
    else if (percent>=60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}
void display()
{
    cout<<"NAME OF STUDENT: "<<name<<endl;
    cout<<"TOTAL MARKS: "<<total<<endl;
    cout<<"AVERAGE MARKS: "<<avg<<endl;
    cout<<"GRADE: "<<grade<<endl;
}
void check()
{
    if (0>mark1 || mark1>100 || 0>mark2 || mark2>100 || 0>mark3 || mark3>100)
    {
        cout<<"INVALID MARKS";

    }
    else {
        calculate();
        display();
    }
}
};

int main()
{
    student s1;
    s1.takeinput();
    s1.check();

    return 0;
}
