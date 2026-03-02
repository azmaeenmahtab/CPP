#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *root = NULL;
void insert_first(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = root;
    root = temp;
    cout << "Inserted " << val << " at first." << endl;
}
void insert_last(int val)
{
    if (root == NULL)
    {
        node *temp = new node();
        temp->data = val;
        temp->next = root;
        root = temp;
        cout << "Inserted " << val << " at last." << endl;
        return;
    }
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    node *curr = root;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    cout << "Inserted " << val << " at last." << endl;
}
void insert_by_position(int pos, int val)
{
    if (pos < 1)
    {
        cout << "Invalid position." << endl;
        return;
    }
    if (pos == 1)
    {
        insert_first(val);
        return;
    }
    node *temp = new node();
    temp->data = val;
    node *curr = root;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {

        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Position out of range." << endl;
    }
    else
    {
        temp->next = curr->next;
        curr->next = temp;
        cout << "Inserted " << val << " at pos " << pos << endl;
    }
}
void insert_by_value(int target, int val)
{
    node *curr = root;
    while (curr != NULL && curr->data != target)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Target value not found." << endl;
    }
    else
    {
        node *temp = new node();
        temp->data = val;
        temp->next = curr->next;
        curr->next = temp;
        cout << "Inserted " << val << " after " << target << endl;
    }
}
void delete_first()
{
    if (root == NULL)
        return;
    node *temp = root;
    root = root->next;
    delete temp;
    cout << "Deleted first node." << endl;
}
void delete_last()
{
    if (root == NULL)
        return;
    if (root->next == NULL)
    {
        delete root;
        root = NULL;
        cout << "Deleted last node." << endl;
        return;
    }
    node *curr = root;
    node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
    cout << "Deleted last node." << endl;
}

void delete_by_position(int pos)
{
    if (root == NULL)
        return;
    if (pos == 1)
    {
        delete_first();
        return;
    }
    node *curr = root;
    node *prev = NULL;
    for (int i = 1; i < pos && curr != NULL; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Position not found." << endl;
    }
    else
    {
        prev->next = curr->next;
        delete curr;
        cout << "Deleted node at pos " << pos << endl;
    }
}
void delete_by_value(int val)
{
    if (root == NULL)
        return;
    if (root->data == val)
    {
        delete_first();
        return;
    }
    node *curr = root;
    node *prev = NULL;
    while (curr != NULL && curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Value not found." << endl;
    }
    else
    {
        prev->next = curr->next;
        delete curr;
        cout << "Deleted value " << val << endl;
    }
}
void printing()
{
    node *curr =
        root;
    cout << "List: ";
    while (curr != NULL)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}
void searching(int val)
{
    node *curr = root;

    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == val)
        {
            cout << "Found " << val << " at position " << pos << endl;
            return;
        }
        curr = curr->next;
        pos++;
    }
    cout << "Not found." << endl;
}
void last_node()
{
    if (root == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    node *curr = root;
    while (curr->next != NULL)
        curr = curr->next;
    cout << "Last node value: " << curr->data << endl;
}
void previous_of_last_node()
{
    if (root == NULL || root->next == NULL)
    {
        cout << "Not enough nodes." << endl;
        return;
    }
    node *curr = root;
    while (curr->next->next != NULL)
        curr = curr->next;
    cout << "Previous of last: " << curr->data << endl;
}
void list_size()
{
    int cnt = 0;
    node *curr = root;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    cout << "Size: " << cnt << endl;
}
void reversePrintHelper(node *t)
{
    if (t == NULL)
        return;
    reversePrintHelper(t->next);
    cout << t->data << " ";
}
void reversePrint()
{
    cout << "Reverse: ";
    reversePrintHelper(root);
    cout << endl;
}
int main()
{

    while (true)
    {
        int choice, val, pos;
        cout << "\n1. Insert First 2. Insert Last 3. Insert Pos 4. Insert Val" << endl;
        cout << "5. Delete First 6. Delete Last 7. Delete Pos 8. Delete Val" << endl;
        cout << "9. Print 10. Search 11. Last Node 12. Prev Last 13. Size 14. Rev Print" << endl;
        cout << "0. Exit. Enter choice: ";
        cin >> choice;
        if (choice == 0)
            break;
        switch (choice)
        {
        case 1:
            cin >> val;
            insert_first(val);
            break;
        case 2:
            cin >> val;
            insert_last(val);
            break;
        case 3:
            cin >> pos >> val;
            insert_by_position(pos, val);
            break;
        case 4:
            cin >> pos >> val;
            insert_by_value(pos, val);
            break;
        case 5:
            delete_first();
            break;
        case 6:
            delete_last();
            break;
        case 7:
            cin >> pos;
            delete_by_position(pos);
            break;
        case 8:
            cin >> val;
            delete_by_value(val);
            break;
        case 9:
            printing();
            break;
        case 10:
            cin >> val;
            searching(val);
            break;
        case 11:
            last_node();
            break;
        case 12:
            previous_of_last_node();
            break;
        case 13:
            list_size();
            break;
        case 14:
            reversePrint();
            break;
        }
    }
    return 0;
}