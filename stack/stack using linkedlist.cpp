#include <iostream>
#include <climits>
using namespace std;
//node
class node
{
    public:
        int data;
        node* next;
};

//push
void push(int value,node** head)
{
    node* ptr = *head;
    if(ptr==NULL)
    {
        ptr->data = value;
        ptr->next = NULL;
        return;
    }
    node* new_node = new node();
    new_node->data=value;
    new_node->next=NULL;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return;
}

//pop
int pop(node** head)
{
    node* ptr = *head;
    if(ptr == NULL)
    {
        cout<<"underflow";
        return INT_MIN;
    }
    while(ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    int value = ptr->next->data;
    ptr->next = NULL;
    return value;
}

//insert

int main()
{
    node* head = new node();
    return 0;
}