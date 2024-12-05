#include <iostream>
using namespace std;

struct NODE {
    int data;
    struct NODE* ptr;
};
typedef struct NODE node;

class linkedlist 
{
    int count = 0;
    node* head, * first, * current;
public:
    linkedlist() 
    {
     first = nullptr; current = nullptr; 
     }
    void ins_beg();
    void ins_last();
    void ins_spe();
    void del_beg();
    void del_last();
    void del_spe();
    void display();
    void operations();
};

void linkedlist::ins_beg() {
    char choice;
    do {
        count++;
        head = new node;
        cout << "Enter the number: ";
        cin >> head->data;
        head->ptr = nullptr;

        if (first == nullptr)
            first = current = head;
        else {
            head->ptr = first;
            first = head;
        }
        cout << "Do you want to enter again(y/n): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

void linkedlist::ins_last() {
    char choice;
    do {
        count++;
        head = new node;
        cout << "Enter the number: ";
        cin >> head->data;
        head->ptr = nullptr;

        if (first == nullptr)
            first = current = head;
        else {
            current->ptr = head;
            current = head;
        }
        cout << "Do you want to enter again(y/n): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

void linkedlist::ins_spe() {
    char choice;
    int pos, dup_count = 1;
    node* temp, * tempc;
    if (count < 1)
        cout << "Not sufficient nodes to perform this";
    else {
        do {
            cout << "Enter the position to be inserted: ";
            cin >> pos;
            if (pos < 1 || pos > count) {
                cout << "Only " << count << " nodes are present, enter a valid number";
            }
            if (pos == 1) {
                ins_beg();
            }
            else {
                count++;
                head = new node;
                cout << "Enter the data: ";
                cin >> head->data;
                head->ptr = nullptr;
                tempc = first;
                while (dup_count < pos - 1) {
                    tempc = tempc->ptr;
                    dup_count++;
                }
                temp = tempc->ptr;
                tempc->ptr = head;
                head->ptr = temp;
                dup_count = 1;
            }
            cout << "Do you want to perform again(y/n): ";
            cin >> choice;

        } while (choice == 'Y' || choice == 'y');
    }
}

void linkedlist::del_beg() {
    char choice;
    node* temp = nullptr;
    do {
        if (count < 1)
            cout << "Not enough nodes to perform operation";
        else {
            temp = first;
            first = first->ptr;
            delete temp;
            count--;
            if (count < 1)
                first = nullptr;
            cout << "Do you want to perform again(y/n): ";
            cin >> choice;
        }
    } while (choice == 'y' || choice == 'Y');
}

void linkedlist::del_last() {
    char choice;
    node* temp = nullptr;
    do {
        if (count < 1)
            cout << "Not enough nodes to perform operation";
        else {
            temp = first;
            while (temp->ptr != current)
                temp = temp->ptr;
            delete current;
            count--;
            current = temp;
            current->ptr = nullptr;
            if (count < 1)
                first = nullptr;
            cout << "Do you want to perform again(y/n): ";
            cin >> choice;
        }
    } while (choice == 'Y' || choice == 'y');
}

void linkedlist::del_spe() {
    char choice;
    node* temp, * del;
    int pos, dup_count = 2;
    if (count < 1) {
        cout << "Not enough nodes to perform operation";
        choice = 'n';
    }
    else {
        do {
            cout << "Enter the position to delete: ";
            cin >> pos;
            if (pos < 1 || pos > count) {
                cout << "Enter valid number";
            }
            else {
                temp = first;
                if (pos == 1) {
                    first = first->ptr;
                    delete temp;
                }
                else {
                    while (dup_count < pos) {
                        temp = temp->ptr;
                        dup_count++;
                    }
                    del = temp->ptr;
                    if (del->ptr != nullptr) {
                        temp->ptr = del->ptr;
                        delete del;
                    }
                    else {
                        delete del;
                        temp->ptr = nullptr;
                    }
                }
                if (count == 1)
                    first = nullptr;
                count--;
                dup_count = 2;
            }
            cout << "Do you want to perform again(y/n): ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
    }
}

void linkedlist::display() {
    int dup_count = 1;
    NODE* temp;
    if (count < 1)
        cout << "No node is present";
    else {
        temp = first;
        while (temp != nullptr) {
            cout << "Node: " << dup_count << " data: " << temp->data << endl;
            temp = temp->ptr;
            dup_count++;
        }
    }
}

void linkedlist::operations() {
    char a;
    int i;
    do {
        cout << "Enter the operation you want to perform\n1-insertion at beginning\n2-insertion at last\n3-insertion at specific location\n4-deletion from beginning\n5-deletion from last\n6-deletion from specific location\n7-display: ";
        cin >> i;
        switch (i) {
        case 1: ins_beg(); break;
        case 2: ins_last(); break;
        case 3: ins_spe(); break;
        case 4: del_beg(); break;
        case 5: del_last(); break;
        case 6: del_spe(); break;
        case 7: display(); break;
        default: cout << "Wrong input"; break;
        }

        cout << "Do you want to do any other operation (y/n): ";
        cin >> a;

    } while (a == 'y' || a == 'Y');
}

int main() {
    linkedlist b;
    b.operations();
}
