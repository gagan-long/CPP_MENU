// SINGLY LINKED LIST PROGRAM (Insertion, Deletion, Traversal)


struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at end
void insertNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete a node
void deleteNode(int value) {
    Node* temp = head;
    Node* prev = NULL;

    // If first node is to be deleted
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        delete temp;
        return;
    }

    // Search the node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Value not found!\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
}

// Traversal
void traverse() {
    Node* temp = head;

    if (temp == NULL) {
        cout << "List is empty\n";
        return;
    }

    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void functionB7()
{
     cleardevice();

    int choice, value;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert\n2. Delete\n3. Traverse\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insertNode(value);
            break;

        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(value);
            break;

        case 3:
            traverse();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

    getch();
}
