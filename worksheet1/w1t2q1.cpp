#include <iostream>
using namespace std;
int main()
{
int num;
int digit[10];
cout<<"Enter a number which is atleast 3 digits and less then 10 digits"<<endl;
cin>>num;
if (num<100 || num>1000000000)
{
    cout<<"INVALID INPUT PLEASE ENTER NUMBER OF 3-10 DIGITS";
}
//first extract the each digit of the number and put them into an array
int i=0;
while(num>0)
{
    digit[i]= num%10;
    num = num / 10;
    i++;

}
//numbers stored in reverse order
//read the array in correct order
bool up = true, down = true;
for (int j=i-1;j>0;j--)
{
    //set condition to check if bouncy
    if (digit[j]>digit[j-1])
    {
        up=false;
    }
    else if (digit[j]<digit[j-1])
    {
        down=false;
    }
}


 if (!up && !down)
        cout << "The number is BOUNCY." << endl;
    else if (up)
        cout << "The number is increasing." << endl;
    else if (down)
        cout << "The number is decreasing." << endl;


return 0;

}


