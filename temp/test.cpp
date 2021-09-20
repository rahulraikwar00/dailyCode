#include <iostream>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// void pop(node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "empty ";
//         return;
//     }
//     head = head->next;
// }
// void push(int val, node *&head)
// {
//     node *newnode = new node(val);
//     node *temp = head;
//     head = newnode;
//     newnode->next = temp;
// }
// void disp(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " " << endl;
//         head = head->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     node *head = NULL;
//     push(0, head);
//     // push(3, head);
//     // push(4, head);
//     // push(5, head);
//     // push(2, head);
//     // push(6, head);
//     // push(5, head);
//     // push(6, head);
//     pop(head);
//     disp(head);
// }
class VirtualClass
{

public:
    virtual void showMe()
    {
        cout << "a" << endl;
    }
};

class Drived : public VirtualClass
{
public:
    void showMe()
    {
        cout << "b" << endl;
    }
};

int main()
{
    VirtualClass *v = new Drived;
    v->showMe();
    return 0;
}