#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    cin >> x;

   
    while (x != -1) {
        Node* newNode = new Node(x);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> x;
    }

   
    if (head == NULL || head->next == NULL) {
        cout << 0 << endl;
        return 0;
    }

    int mn = INT_MAX;
    int mx = INT_MIN;

    Node* temp = head;
    while (temp != NULL) {
        mn = min(mn, temp->val);
        mx = max(mx, temp->val);
        temp = temp->next;
    }

    cout << mx - mn << endl;

    return 0;
}
