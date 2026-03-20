#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertion(Node* &head,Node* &tail, int val)
{   Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else 
    {
        tail->next = newnode;
        tail=newnode;
    }
}
void reverse(Node* &tmp)
{
    if(tmp==NULL)
    {
        return ;
    }
    reverse(tmp->next);
    cout<<tmp->val<<" ";
}

void print_linked_list(Node* head)
{   
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
}

int main() {
     Node* head = NULL;
     Node* tail = NULL;
     int val;
     while(true)
     {
        cin>>val;
        if(val== -1)
        {
            break;
        }
        insertion(head,tail,val);
     }

    // print_linked_list(head);
    Node* tmp = head;
    reverse(tmp);
    return 0;
}
