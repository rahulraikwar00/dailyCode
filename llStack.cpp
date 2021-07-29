#include <iostream>

using namespace std;
class Stack
{
public:
    int data;
    Stack *next;
    Stack(int val)
    {
        data = val;
        next = NULL;
    }
};

void push(Stack *&head, int val)
{
    Stack *n = new Stack(val);
    n->next = head;
    head = n;
}

void disp(Stack *head)
{
    while (head != NULL)
    {
        cout << head->data << "--> ";
        head = head->next;
    }
    cout << " NULL";
}

void pop(Stack *&head)
{
    head = head->next;
}

int top(Stack *head)
{
    return head->data;
}

int main()
{
    Stack *head = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);
    pop(head);
    cout << top(head) << endl;
    disp(head);
}