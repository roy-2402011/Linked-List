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
 bool palindromeORnot(Node* head, Node* tail)
 {  Node* st = head;
    Node* ed = tail;

    while(st != NULL && ed != NULL)
    {

        if(st->val != ed->val)
        {
            return false;
        }
        st=st->next;
        ed=ed->prev;

    }
    return true;
 }
 void insert_at_tail(Node* &head,Node* &tail,int val)
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

    tail = newNode;


 }

 void print_reverse(Node* tail1)
 {
      Node* tmp = tail1;
      while(tmp!=NULL)
      {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
      }

 }

int main() {
    
     Node* head=NULL;
     Node* tail=NULL;

     int val;
     while(true)
     {
       
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
     }
    //   print_reverse(tail1);

   if(palindromeORnot(head,tail))
   {
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

    return 0;
}
