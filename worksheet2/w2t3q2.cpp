#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
float mark1,mark2,mark3,roll;
string name;
char mod;
char grade;
public:
void addinput()
{
    ofstream file("studentrecord.txt",ios::app);
    if (file.is_open())
    {
    cout<<"Enter your full name "<<endl;
    getline(cin,name);
    file<<"Name : "<<name<<endl;
    cout<<"Enter your roll number "<<endl;
    cin>>roll;
    file<<"Roll no : "<<roll<<endl;
    cin.ignore();
    cout<<"Enter marks of Subject 1 out of 100 "<<endl;
    cin>>mark1;
    if (mark1>=0 && mark1<=100)
    {
        file<<"Mark1 : "<<mark1<<endl;
    }
    else
    {
        file << "Mark1 : INVALID MARK" << endl;
        cout<<"INVALID MARK";

    }
    cout<<"Enter marks of Subject 2 out of 100 "<<endl;
    cin>>mark2;
    if (mark2>=0 && mark2<=100)
    {
        file<<"Mark 2 : "<<mark2<<endl;

    }
    else
    {
        file << "Mark2 : INVALID MARK" << endl;
        cout<<"INVALID MARK";
    }

    cout<<"Enter marks of Subject 3 out of 100"<<endl;
    cin>>mark3;
    if (mark3>=0 && mark3<=100)
    {
        file<<"Mark 3 : "<<mark3<<endl;
    }
    else
    {
        file << "Mark3 : INVALID MARK" << endl;
        cout<<"INVALID MARKS";
    }
    }
    else
    {

        cout<<"File not open";
    }
}

void modify()
{
    cout <<"DO YOU WISH TO MODIFY RECORDS (y/n)"<<endl;
    cin>>mod;
    cin.ignore();
    if (mod=='Y' || mod=='y')
    {
    string searchh;
    string line;
    cout<<"enter the name of the student you want to check: ";

    getline(cin,searchh);

    ifstream infile("studentrecord.txt");
    ofstream temp("temp.txt");

    if (!infile.is_open()) {
    cout << "File cannot be opened!" << endl;
    return;
    }
    bool found = false;
    while (getline(infile, line))
    {
       if (line.find("Name : " + searchh) != string::npos)
        {
        found=true;
        temp << line << endl;
        getline(infile, line); temp << line << endl;

        cout << "Enter new marks for " << searchh << ":\n";
        cout << "Subject 1: ";
        cin >> mark1;
         if (mark1 >= 0 && mark1 <= 100)
            temp << "Mark1 : " << mark1 << endl;
        else
            temp << "Mark1 : INVALID MARK" << endl;

        cout << "Subject 2: ";
        cin >> mark2;
         if (mark2 >= 0 && mark2 <= 100)
            temp << "Mark2 : " << mark2 << endl;
        else
            temp << "Mark2 : INVALID MARK" << endl;


        cout << "Subject 3: ";
        cin >> mark3;
         if (mark3>= 0 && mark3 <= 100)
            temp << "Mark3 : " << mark3 << endl;
        else
            temp << "Mark3 : INVALID MARK" << endl;


        temp << "Mark1 : " << mark1 << endl;
        temp << "Mark2 : " << mark2 << endl;
        temp << "Mark3 : " << mark3 << endl;

        getline(infile, line);
        getline(infile, line);
        getline(infile, line);

        }
        else
        {
            temp<<line<<endl;

        }



    }



    if (!found) {
    cout << "Student not found!" << endl;
    }
    infile.close();
    temp.close();

    remove("studentrecord.txt");
    rename("temp.txt", "studentrecord.txt");

    }

else {
    cout<<"END"<<endl;
}

}

void display()
{

ifstream openfile("studentrecord.txt");
string lines;
cout << "records : "<<endl;
while (getline(openfile, lines)) {
    cout << lines << endl;
}

    openfile.close();
}




};

int main(){
student s;
s.addinput();
s.modify();
s.display();
return 0;
}




