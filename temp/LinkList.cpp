// linked list

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

int insertt(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void disp(node *head)
{

    while (head->next != NULL)
    {
        cout << head->data << "--> ";
        head = head->next;

        /* code */
    }
    cout << "NULL" << endl;
}

void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// reverse iterative mathod
node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *nx;

    while (curr != NULL)
    {
        nx = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nx;
    }
    return prev;
}

//reverse recursive mathod

node *reversrec(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *lastnode = reversrec(head->next);
    head->next->next = head;
    head->next = NULL;

    return lastnode;
}
bool search(node *head, int val)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        /* code */
        if (tmp->data == val)
        {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void insertAt(node *&head, int val, int index)
{

    int counter = 1;
    node *newnode = new node(val);
    node *temp2 = head;
    while (counter != index)
    {
        temp2 = temp2->next;
        counter++;
    }

    node *temp = temp2->next;
    temp2->next = newnode;
    newnode->next = temp;
}

void kthNode(node *head, int k)
{
    node *fast = head;
    node *slow = head;
    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    cout << slow->data << endl;
}

void middle(node *head)   start = end = nullptr;
//     node *t;
// }
{
    node *s = head;
    node *f = head;
    while (f->next != NULL && f->next->next != NULL)
    {
        s = s->next;
        f = f->next->next;
        /* code */
    }
    cout << s->data << endl;
}

void merge(node *head, node *pad)
{
    node *one = head;
    node *two = pad;
    node *newll = NULL;
    while (one->next != NULL && two->next != NULL)
    {
        if (one->data > two->data)
        {
            insertt(newll, two->data);
            two = two->next;
        }
        else
        {
            insertt(newll, one->data);
            one = one->next;
        }
    }
    while (one->next != NULL)
    {
        insertt(newll, one->data);
        one = one->next;
    }
    while (two->next != NULL)
    {
        insertt(newll, two->data);
        two = two->next;
    }
    disp(newll);
}


void mergeSorted(node* head){
  
             
}

int main()
{

    node *head = NULL;
    node *pad = NULL;

    insertt(head, 10);
    insertt(head, 20);
    insertt(head, 30);
    insertt(head, 40);
    insertt(head, 50);
    insertt(head, 90);
    insertt(head, 60);

    insertt(pad, 11);
    insertt(pad, 22);
    insertt(pad, 33);
    insertt(pad, 44);
    insertt(pad, 55);
    insertt(pad, 99);
    insertt(pad, 66);
    merge(head,pad);
    // kthNode(head, 3);
    // insertathead(head, 5);i
    // cout << search(head, 5) << endl;
    // middle(head);
    // node *newhead = reversrec(head);
    //disp(head);
    
    // reverse(head);
}