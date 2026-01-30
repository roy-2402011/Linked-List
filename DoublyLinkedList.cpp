
// Practce Module 8: Practice Problem



#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

 void insert_at_tail(Node* &head,Node* & tail,int val)
 {
    
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    newNode->prev=tail;


 }

 bool test(Node* &head1,Node* & head2)
 {
    Node* p1=head1;
    Node* p2=head2;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->val!=p2->val)
        {
            return false;
        }
        p1=p1->next;
        p2=p2->next;
    }

    if(p1!=NULL || p2!=NULL)
    {
        return false;
    }

    return true;

 }
int main() {
    
     Node* head1=NULL;
     Node* tail1=NULL;

    
     Node* head2=NULL;
     Node* tail2=NULL;

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



      bool t =test(head1,head2);
      if(t)
      {
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
    return 0;
}
