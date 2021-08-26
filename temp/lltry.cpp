#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(int val, node *&head)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void disp(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
void deleteNode(int val, node *&head)
{
    bool flag = false;
    if (head == NULL)
    {
        cout << "list is empty !" << endl;
        return;
    }
    if (head->data == val)
    {
        head = head->next;
    }
    node *temp = head;
    node *prev = head;
    while (temp->next != NULL)
    {
        prev = temp;
        if (temp->next->data == val)
        {
            temp = temp->next->next;
            prev->next = temp;
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if (!flag)
    {
        cout << "NOT Found !" << endl;
    }
}

int main()
{
    node *head = NULL;
    insert(1, head);
    insert(2, head);
    insert(3, head);
    insert(4, head);
    insert(5, head);
    insert(6, head);
    deleteNode(1, head);
    // disp(head);
    // deleteNode(3, head);
    // disp(head);
    // deleteNode(5, head);
    // disp(head);
    // deleteNode(5, head);
    // disp(head);
    // deleteNode(2, head);
    disp(head);
    return 0;
}



