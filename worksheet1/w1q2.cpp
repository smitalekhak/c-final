#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class guess
{
private:
    int num;
    int choice;
    int random;
public:
    void level()
    {
        cout<<"Enter which level do you want to play. \n"
        <<"Type '1' - Easy \n"
        <<"Type '2' - Medium \n"
        <<"Type ' 3' - Hard \n"<< endl;
        cin>>choice;
    }

    void display()
    {
        if (choice==1)
        {
            int random = rand() % 8 + 1;
            cout<<"Guess the correct number within the range of 1-8"<<endl;
            cin>>num;
            if (num== random)
            {
                cout<<"The guess was correct! U WIN! "<<"The number is "<<num<<endl;
            }
            else
            {
                cout<<"The guess was not correct! U LOSE! "<<"The number is "<<random<<endl;

            }
        }
         else if (choice==2)
        {
            int random = rand()% 30  + 1;
            cout<<"Guess the correct number within the range of 1-30"<<endl;
            cin>>num;
            if (num== random)
            {
                cout<<"The guess was correct! U WIN! "<<"The number is "<<num<<endl;
            }
            else
            {
                cout<<"The guess was not correct! U LOSE! "<<"The number is "<<random<<endl;

            }
        }
        else if (choice==3)
        {
            int random = rand() % 100 + 1;
            cout<<"Guess the correct number within the range of 1-100"<<endl;
            cin>>num;
            if (num== random)
            {
                cout<<"The guess was correct! U WIN! "<<"The number is "<<num<<endl;
            }
            else
            {
                cout<<"The guess was not correct! U LOSE! "<<"The number is "<<random<<endl;

            }
        }
        else
        {
            cout<<"Invalid Input"<<endl;
        }
    }
};
int main()
{
    srand(time(0));
    guess g;
    g.level();
    g.display();
    return 0;

}

