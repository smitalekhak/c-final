#include <iostream>
using namespace std;
class q {
public:
    int que[10];
    int f, l;
    q()
    {
        f = -1;
        l = -1;
    }
      void enq(int a)
    {
        if (l == 9)
        {
            cout << "OVERFLOW CANNOT ADD" << endl;
            return;
        }
        if (f == -1)
        {
            f = 0;
        }

        l++;
        que[l] = a;
    }

    void deq(){
         if (f == -1 || f > l) {
            cout << "UNDERFLOW  " << endl;
        } else {
            cout << que[f] << " DEQUEUD" << endl;
            f++;
        }
    }

    void revk(int k) {
        if (f == -1 || f > l) {
            cout << "QUEUE EMPTY" << endl;
            return;
        }
        if (k > l - f + 1) {
            cout << "K is greater than the size of the queue!" << endl;
            return;
        }


    int start = f;
    int last = f + k - 1;
    while (start < last) {
            swap(que[start], que[last]);
            start++;
            last--;
        }
        cout << "First " << k << " elements reversed!" << endl;
    }

    void toleaveq()
    {
       int length = l -f +1 ;
       if (length % 2 != 0)
       {
           cout <<"THE ELEMENTS SHOULD BE EVEN TO INTERLEAVE "<<endl;
       }

       int mid = f + length / 2 - 1;
       int half1[length/2],half2[length/2];

       for (int i = 0; i < length / 2; i++) {
            half1[i] = que[f + i];
        }

        for (int i = 0; i < length / 2; i++) {
            half2[i] = que[mid + 1 + i];
        }

        int index = f;
        for (int i = 0; i < length / 2; i++) {
            que[index++] = half1[i];
            que[index++] = half2[i];
        }

        cout<<"QUEUE INTERLEAVE IS COMPLETE "<<endl;

    }

    void display() {
        if (f == -1 || f > l) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = f; i <= l; i++) {
            cout << que[i] << " ";
        }
        cout << endl;
    }



};




int main()
{
    q q1;
    q1.enq(1);
    q1.enq(2);
    q1.enq(3);
    q1.enq(4);
    q1.enq(5);
    q1.enq(6);

    cout<<" QUEUE : ";
    q1.display();

    q1.revk(3);
    cout << "After reversing first 3 elements: ";
    q1.display();

    q1.toleaveq();
    cout<< "INTERLEAVING QUEUE : ";
    q1.display();

    q1.deq();
    cout << "After dequeue: ";
    q1.display();


    return 0;

}

