#include <iostream>
using namespace std;

//node
class node
{
public:
    int data;
    node *next;
};

//insert function
node* insert(int value, node *head)
{
    if(head == NULL)
    {
        head = new node();
        head->data = value;
        head->next = NULL;
        return head;
    }
    node *new_node = new node();
    new_node->data = value;
    new_node->next = NULL;
    node *ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    return head;
}

//display function
void display(node *head)
{
    node* ptr = head;
    if(ptr==NULL)
    {
        cout<<"empty";
        return;
    }
    while(ptr->next != NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<ptr->data;
}

node* delete_kth(int k, node* head)
{
    node* ptr = head;
    node* prev = NULL;
    int counter = 1;
    if(k==1)
        return head->next;
    while(ptr->next != NULL)
    {
        if(counter==k)
            break;
        counter++;
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    return head;
}

//driver code
int main()
{
    node *head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        head = insert(value,head);
    }
    display(head);

    int k;
    cin>>k;
    head = delete_kth(k,head);
    return 0;
}