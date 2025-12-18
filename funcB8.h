//QUEUE PROGRAM (Using Array: Enqueue, Dequeue, Traverse)


#define SIZE 10

class Queue {
    int q[SIZE];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is Full!\n";
            return;
        }
        if (front == -1)
            front = 0;

        q[++rear] = value;
        cout << "Inserted: " << value << endl;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        int item = q[front++];
        cout << "Deleted: " << item << endl;
        return item;
    }

    void traverse() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty!\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

void functionB8() 
{
         cleardevice();
    Queue q;
    int choice, value;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. ENQUEUE\n2. DEQUEUE\n3. TRAVERSE\n4. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.traverse();
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

   getch();
}
