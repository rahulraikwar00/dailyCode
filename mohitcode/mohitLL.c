#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void printing_list()
{
    if (head == NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("--PRINTING LIST--\n");

        while (head != NULL)
        {
            printf("%d\n", head->data);
            head = head->next;
        }
    }
}

void delete_last_node(struct node **head)
{
    struct node *prev = NULL, *cur = NULL;

    /*Linked list does not exist or the list is empty*/
    if (head == NULL || *head == NULL)
        return;

    /*If there is only one node in the list*/
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }

    prev = *head;
    cur = prev->next;

    while (cur->next)
    {
        prev = prev->next;
        cur = cur->next;
    }

    prev->next = NULL;
    free(cur);
}

void remove_last()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;

    if (head->next->next = NULL)
        head->next = NULL;
    // 1-> 2-> 3-> NULL
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    printf("last node- deleted-\n");
}

//Insert node at head

struct node *reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *nextPrt;
    while (current->next != NULL)
    {
        nextPrt = current->next;
        current->next = prev;
        prev = current;
        current = nextPrt;

        //          head
        //           |
        //  <-1    2->    3->
        // |        |       |
        // null    prev,    cur next
    }
}
/*  
                     head  
    
        NULL    ->    1         ->2             ->3
        prevptr      cur        nextptr           
    

*/

    








void insert_node_at_head(int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    printf("Node %d inserted at head\n", value);
}

int main()
{

    struct node *head = NULL;

    insert_node_at_head(12);

    insert_node_at_head(14);
    // printing_list();

    insert_node_at_head(15);
    // printing_list();

    insert_node_at_head(16);
    insert_node_at_head(123);

    insert_node_at_head(143);
    // printing_list();

    insert_node_at_head(1556);
    // printing_list();

    insert_node_at_head(1623);
    // printing_list();

    printing_list();
    remove_last();
    // printing_list();
    return 0;
}
