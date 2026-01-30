// #include <bits/stdc++.h>
// using namespace std;
// class Node 
// {
//     public:
//     int val;
//     Node* next;


// };
// int main() {
//      Node a,b,c;
//      a.val=10;
//      b.val=20;
//      c.val=30;

//      a.next=&b;
//      b.next=&c;
//      c.next=NULL;
//      cout<<a.val<<endl<<a.next->val;
//     return 0;
// }
//at Head--------------------------------

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
   
    void insert_at_head(Node* &head,int val)
    {
        Node* Newnode=new Node(val);
        Newnode->next=head;
        head=Newnode;
    }
    
    void print_linked_list(Node* head)
    {   
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
    }
int main() {
   
     
    return 0;
}
