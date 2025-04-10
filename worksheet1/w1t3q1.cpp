#include <iostream>
using namespace std;
class Cinemabook
{
private:
    int row,column;
    char seat[5][5];
public:
    //set the seats as "O"
    void defaultseat()
    {
        for (int i=0;i<5;i++)
        {
            for (int j=0;j<5;j++)
            {
                seat[i][j] = 'O';
            }
        }
    }
    //ask which seat the user wants to book
    void booking()
    {
        cout<<"Enter the row"<<endl;
        cin>>row;
        cout<<"Enter the column"<<endl;
        cin>>column;
    }
    // set conditions
    void bookseats()
    {
       if (0>row>5 || 0>column>5)
       {
           cout<<"enter a valid row and column !"<<endl;
       }
       else if (seat[row-1][column-1]=='X')
       {
           cout << "Seat already booked pick another one."<<endl;
       }
       else
       {
        seat[row-1][column-1] = 'X';
       }
    }
    //display the seating arrangement after booking
    void finalseating()
    {
    for (int i = 0; i < 5; i++)
        {
        for (int j = 0; j < 5; j++)
        {
            cout << seat[i][j] << " ";
        }
        cout << endl;

        }
    }

};

int main(){
Cinemabook c1;
c1.defaultseat();

int loop;
do
{
c1.booking();
c1.bookseats();
c1.finalseating();
cout<<"IF YOU WANT TO KEEP BOOKING TYPE '1'"<<endl;
cin>>loop;
} while (loop==1);
return 0;
}
