#include <iostream>
using namespace std;
class stacarray
{
private:
    int arrayy[10];
    int top;
public:
    stacarray()
    {
        top = -1;
    }
    void push(int a)
    {
        if (top==9)
        {
            cout<<" STACK IS FULL \n"<<endl;
        }
        else
        {
            arrayy[++top] = a;
            cout<< a <<" PUSHED TO STACK \n "<<endl;
        }
    }
    void pop()
    {
        if (top==-1)
        {
            cout<<"STACK EMPTY \n"<<endl;

        }
        else
        {
            cout<<arrayy[top--]<<" POPPED OUT FROM STACK \n "<<endl;
        }
    }

    void middle()
    {
        if (top == -1)
        {
            cout<<"STACK EMPTY \n"<<endl;
        }
        else {
            int mid = top/2;
            cout << " MIDDLE ELEMENT IS : "<< arrayy[mid]<<"\n";
        }
    }

    void reversehalf ()
    {
        if (top < 1)
        {
            cout<<"the elements are not enough to reverse \n"<<endl;
        }
        else
        {
           int mid= (top) / 2;

           for (int i=0; i<=mid / 2; i++)
           {
               int temp= arrayy[i];
               arrayy[i]=arrayy[mid-1-i];
               arrayy[mid-1-i]=temp;
           }
           cout<<" BOTTOM  HALF REVERSED \n"<<endl;
           display();
        }
    }

    void display()
    {
      if (top == -1)  {
        cout<<"EMPTY STACK \n";
      }
      else {
        cout<<"STACK ELEMENTS ARE \n "<<endl;
        for (int i= 0; i<=top;i++)
        {
            cout<< arrayy[i]<<" ";
        }
      }
      cout<<endl;
    }



};
int main(){


    stacarray s1;
    s1.push(9);
    s1.push(12);
    s1.push(6);
    s1.push(4);
    s1.push(7);
    s1.push(3);
    s1.push(21);

    s1.display();

    s1.middle();
    s1.reversehalf();
    s1.pop();
    s1.display();



return 0;
}
