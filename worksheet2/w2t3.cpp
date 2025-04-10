#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
int main()
{
    char titles[10][150];
    //open file and check
    fstream file;
    file.open("titles.txt", ios::binary | ios::out | ios::trunc );
    if (!file)
    {
        cout<<"ERROR! FILE NOT OPEN"<<endl;
        return 1;
    }
    //enter 10 titles and store
    for (int i=0; i<10 ; i++)
    {
    cout<<"enter title of book "<<endl;
    cin.getline(titles[i], 150);
    file.write(titles[i], 150);
    }

     cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string useri;
    cout << "ENTER THE BOOK TITLE TO SEARCH: ";
    getline(cin, useri);

    // to check if title is there
    ifstream checkfile("titles.txt",ios::binary);
    if (!checkfile)
    {
        cout<<"Error file not open"<<endl;
        return 1;
    }

    char temp[150];
    bool found = false;

    for (int i = 0; i < 10; i++)
    {
        checkfile.read(temp, 150);
        temp[149] = '\0';
        string current(temp);

        current = current.substr(0, current.find('\0'));
        current.erase(current.find_last_not_of(" \t\n\r") + 1);

         if (current == useri)
        {
            cout << "FOUND" << endl;
            found = true;
            break;
        }

    }

    if  (!found)
    {
        cout<<"NOT FOUND";
    }

 checkfile.close();

return 0;
}

