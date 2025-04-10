#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> names;
    map<string, int> agemap;
    while(true){
    int choice;
    cout << "\nMenu:\n";
        cout << "1. Add person\n";
        cout << "2. Show people above certain age\n";
        cout << "3. Show sorted names\n";
        cout <<  "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    if (choice==1)
    {
    string name;
    int age;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter age: "<<endl;
    cin>>age;
    names.push_back(name);
    agemap[name] = age;
    cout<<"ADDED"<<endl;
    }

    else if (choice==2)
    {
    int agelimit;
    cout<<"Enter age limit "<<endl;
    cin>>agelimit;
    cout << "People above age " << agelimit << ":" << endl;
    for (const auto& person : agemap)
    {

    if (person.second > agelimit) {
    cout << person.first << " (" << person.second << " years old)" << endl;

    }
    }
    }

    else if ( choice == 3)
    {
    vector<string> sortednames = names;
    sort(sortednames.begin(), sortednames.end());
    for (string& name : sortednames) {
    cout << name << " (" << agemap[name] << " yrs)" << endl;
    }
    }

    else if (choice==4)
    {
        cout<<"END";
        break;
    }
    else {
        cout<<"INVALID PUT ANOTHER NUMBER"<<endl;
    }

    }

return 0;
}
