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


void insert_at_tail(Node* &head,Node * &tail, int val)
{   
    Node * NewNode=new Node(val);

    if(head==NULL)
    {
        head=NewNode;
        tail=NewNode;
    }
    else 
    {
        tail->next=NewNode;
        tail=NewNode;
    }
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
 
int countNode(Node* head)
{
    int num=0;
    Node* temp = head;
    while(temp != NULL)
    {
        num++;
        temp = temp->next;
    }
    return num;

}
int main() {
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

     while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
  
     if(countNode(head1)==countNode(head2))
     {
        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;

    return 0;
}
