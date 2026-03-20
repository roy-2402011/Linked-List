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

bool insert_at_index(Node* &head, int index, int val)
{
    Node* newNode = new Node(val);

    
    if(index == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }

    Node* temp = head;
    int i = 0;

    while(temp != NULL && i < index - 1)
    {
        temp = temp->next;
        i++;
    }

    
    if(temp == NULL)
    {
        return false;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return true;
}

// print list
void print_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true)
    {
        cin >> val;
        if(val == -1) break;

        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int q;
    cin >> q;

    while(q--)
    {
        int index, value;
        cin >> index >> value;

        if(insert_at_index(head, index, value))
        {
            print_list(head);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}