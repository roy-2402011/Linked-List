// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void pint(Node* head)
// {
//     Node* tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout << endl;
// }
// void  insert_at_head(Node* &head,int val)
// {   
//     Node * newnode=new Node(val);
//     if(head==NULL)
//     {
//       head =newnode;
//        pint(head);
//     }
//     else 
//     {
//         newnode->next=head;
//         head=newnode;
//          pint( head);

//     }
    
// }

// void  insert_at_tail(Node* &head,int val)
// {
//     Node* newnode= new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         pint(head);
//         return;
//     }
//     Node* tmp=head;
//     while(tmp->next!=NULL)
//     {
//         tmp=tmp->next;
//     }
//     tmp->next=newnode;
//      pint(head);
// }


// void deleteidx(Node*& head, int idx)
// {
//     if (head == NULL) return;

    
//     if (idx == 0)
//     {
//         Node* deleteNode = head;
//         head = head->next;
//         delete deleteNode;
//         pint(head);
//         return;
//     }

//     Node* tmp = head;
//     for (int i = 0; i < idx - 1; i++)
//     {
//         if (tmp->next == NULL) return; 
//         tmp = tmp->next;
//     }

//     if (tmp->next == NULL) return;

//     Node* deleteNode = tmp->next;
//     tmp->next = deleteNode->next;
//     delete deleteNode;
//     pint(head);
// }

// int main() {
//      int t;
//      cin>>t;
//      Node* head=NULL;
//      while(t--)
//      {
        
//         int x,v;
//         cin>>x>>v;

//         if(x==0)
//         {
//             insert_at_head(head,v);
           
//         }

//         else if(x==1)
//         {
//             insert_at_tail(head,v);
           
//             }
        

//         else
//         {
//             deleteidx(head,v);
//         }
//     }

     
//     return 0;
// // }

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
void insert_at_tail(Node* &head,int val)
{   Node* Newnode=new Node(val);
    if(head==NULL)
    {
       head=Newnode;
       return;
    }
 
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
     tmp->next=Newnode;


}

void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

void sort_linked_list(Node* &head)
{
    for(Node* i=head; i->next!=NULL; i=i->next)
    {
        for(Node* j=i->next; j!= NULL; j=j->next)
         {

            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
         }
        

    }
}
// void Delete(Node* & head)
// {
//     for (Node* i = head; i != NULL; i = i->next)
//     {
//         Node* tmp = i;
//         Node* j = i->next;

//         while (j != NULL)
//         {
//             if (i->val == j->val)
//             {
//                 tmp->next = j->next;
//                 delete j;
//                 j = tmp->next;
//             }
//             else
//             {
//                 tmp = j;
//                 j = j->next;
//             }
//         }
//     }
   
// }
void Delete(Node* & head)
{
for(Node* i=head; i->next!=NULL; i=i->next)
    {
        for(Node* j=i->next; j!= NULL; j=j->next)
         {

            if(i->val==j->val)
            {
                i->next=j->next;
                delete j;
                j=i->next;

            }
         }
        

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

        insert_at_tail(head,val);
     }

     sort_linked_list(head);

      Delete(head);
     print(head);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
   
     cin>>t;
     while(t--)
     {
        int val;
        cin>>val;
        if(val%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
    return 0;
}
