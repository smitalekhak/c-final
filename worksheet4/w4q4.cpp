#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = nullptr;
    }


};

class linked
{

private:
    node* head;

public:


    linked()
    {
     head = nullptr;
    }
    ~linked()
    {
        node* curr = head;
        while(curr)
        {
            node* temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = nullptr;
    }

     void insertfromstart(int a)
     {
      node* newN = new node(a);
        newN->next = head;
        head = newN;
        cout<<"INSERTED AT START"<<endl;

     }

     void insertfromend(int b)
     {
        node* newN = new node(b);
        if (!head)
        {
            head = newN;
            cout << b << "INSERTED AT THE END" << endl;
            return;

        }

        node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newN;
        cout << b << " inserted at end." << endl;


     }

    void detectandremloop()
    {
        node* slow = head;
        node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                break;
        }

        if (slow == fast)
    {
            slow = head;
            if (slow == fast) {
                // Loop starts at head
                while (fast->next != slow)
                    fast = fast->next;
            }
            else
            {
                while (slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            fast->next = nullptr;

            cout<<"LOOP REMOVED"<<endl;

    }
    }

    int findfromend(int n)
    {
        if (n<=0 || !head)
        {
            return -1;
        }
            node* first= head;
            node* second = head;
            for (int i = 0 ; i< n ; ++i)
            {
                if (!second) {
                return -1;
                second = second->next;
                }

                while (second) {
                first = first->next;
                second = second->next;
                }

                return first->data;
            }
        }

        node* reverseGroup(node* head, int k)
        {
        node* current = head;
        node* prev = nullptr;
        node* next = nullptr;
        int count = 0;

        while (current && count < k)
        {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
        }

        if (next)
        {
        head->next = reverseGroup(next, k);
        }

    return prev;
}


        void reverseInGroups(int d)
        {
        if (d <= 1 || !head) return;
        head = reverseGroup(head, d);
        }


        void display() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
        }


        void createloop()
        {
        if (!head || !head->next) return;
        node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = head->next;
        }

};


int main()
{
    linked list;

    list.insertfromend(10);
    list.insertfromend(23);
    list.insertfromend(34);
    list.insertfromend(47);
    list.insertfromend(50);

    cout << "Original List: ";
    list.display();

    list.insertfromstart(5);
    cout << "After insert at start: ";
    list.display();

    cout << "Reversed in groups of 2: ";
    list.reverseInGroups(2);
    list.display();

    int n = 3;
    int result = list.findfromend(n);
    if (result != -1)
        cout << n << "rd node from end is: " << result << endl;
    else
        cout << "List is too short for that." << endl;

    list.createloop();
    list.detectandremloop();

    cout << "After loop check (and remove if needed): ";
    list.display();


return 0;
}
