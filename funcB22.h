
// Array operations
class ArrayOperations {
private:
    int arr[100], len;
public:
    void readArray() ;
    void displayArray() {
        cleardevice();
        cout<<"Array elements: ";
        for (int i = 0; i < len; i++) 
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    void insertElement() {
        cleardevice();
        int pos, num;
        cout<<"Enter the element to insert: ";
        cin>>num;
        cout<<"Enter the position (0-based): ";
        cin>>pos;
        if (pos < 0 || pos > len) {
            cout<<"Invalid position!\n";
            return;
        }
        for (int i = len; i > pos; i--) {
            arr[i] = arr[i-1];
            arr[pos] = num;
            len++;
        
        }
        cout<<"Element inserted.\n";
    }
    void deleteElement() {
        cleardevice();
        int pos;
        cout<<"Enter the position to delete (0-based): ";
        cin>>pos;
        if (pos < 0 || pos >= len) {
            cout<<"Invalid position!\n";
            return;
        }
        for (int i = pos; i < len-1; i++)
         {arr[i] = arr[i+1];}
        len--;
        cout<<"Element deleted.\n";
    }
    void mergeArrays() {
        cleardevice();
        int arr1[100], arr2[100], arr3[200];
        int p, q, c = 0, m = 0, n = 0;
        cout<<"Enter number of elements in first array: ";
        cin>>p;
        cout<<"Enter elements of first array: ";
        for (m = 0; m < p; m++) cin>>arr1[m];
        cout<<"Enter number of elements in second array: ";
        cin>>q;
        cout<<"Enter elements of second array: ";
        for (n = 0; n < q; n++)
         {cin>>arr2[n];}
        while (m < p && n < q) {
            if (arr1[m] < arr2[n]) arr3[c++] = arr1[m++];
            else arr3[c++] = arr2[n++];
        }
        while (m < p) arr3[c++] = arr1[m++];
        while (n < q) arr3[c++] = arr2[n++];
        cout<<"Merged array: ";
        for (int i = 0; i < c; i++) 
        {cout<<arr3[i]<<" ";}
        cout<<"\n";
    }
};
void ArrayOperations ::readArray() {
        cleardevice();
        cout<<"Enter the number of elements: ";
        cin>>len;
        cout<<"Enter the elements: ";
        for (int i = 0; i < len; i++){
             cin>>arr[i];
        }
    }

// Stack operations using array
class StackArray {
private:
    int stack[10], top;
public:
    StackArray() { top = -1; }
    void push() {
            cleardevice();
        int item;
        if (top == 9) {
            cout<<"Stack is full!\n";
            return;
        }
        cout<<"Enter element to push: ";
        cin>>item;
        stack[++top] = item;
        cout<<"Element pushed.\n";
    }
    void pop() {
        cleardevice();
        if (top == -1) {
            cout<<"Stack is empty!\n";
            return;
        }
        cout<<"Popped element: "<<stack[top--]<<"\n";
    }
    void traverse() {
        cleardevice();
        if (top == -1) {
            cout<<"Stack is empty!\n";
            return;
        }
        cout<<"Stack elements: ";
        for (int i = top; i >= 0; i--) {cout<<stack[i]<<" ";}
        cout<<"\n";
    }
};

// Stack operations using linked list
struct Nodes {
    int data;
    struct Nodes* next;
};

class StackLinkedList {
private:
    struct Nodes* top;
public:
    StackLinkedList() { top = NULL; }
    void push() {
        cleardevice();
        struct Nodes* node = (struct Nodes*)malloc(sizeof(struct Nodes));
        cout<<"Enter element to push: ";
        cin>>node->data;
        node->next = top;
        top = node;
        cout<<"Element pushed.\n";
    }
    void pop() {
        cleardevice();
        if (top == NULL) {
            cout<<"Stack is empty!\n";
            return;
        }
        struct Nodes* temp = top;
        cout<<"Popped element: "<<temp->data<<"\n";
        top = top->next;
        free(temp);
    }
    void display() {
        cleardevice();
        if (top == NULL) {
            cout<<"Stack is empty!\n";
            return;
        }
        struct Nodes* temp = top;
        cout<<"Stack elements: ";
        while (temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
};

// Infix to postfix conversion
class InfixToPostfix {
private:
    char stack[50];
    int top;
public:
    InfixToPostfix() { top = -1; }
    void push(char c) {
        cleardevice();
        if (top == 49) {
            cout<<"Stack overflow!\n";
            return;
        }
        stack[++top] = c;
    }
    char pop() {
        cleardevice();
        if (top == -1) {
            cout<<"Stack empty!\n";
            return 0;
        }
        return stack[top--];
    }
    int precedence(char c) {
        if (c == '/') return 5;
        else if (c == '*') return 4;
        else if (c == '+') return 3;
        else return 2;
    }
    void convert() {
        cleardevice();
        char infix[25], postfix[40];
        int index = 0, pos = 0;
        char symbol, temp;
        cout<<"Enter infix expression: ";
        cin>>infix;
        int length = strlen(infix);
        push('(');
        while (index < length) {
            symbol = infix[index];
            switch (symbol) {
                case '(':
                    push(symbol);
                    break;
                case ')':
                    temp = pop();
                    while (temp != '(') {
                        postfix[pos++] = temp;
                        temp = pop();
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                    while (top >= 0 && precedence(stack[top]) >= precedence(symbol)) {
                        temp = pop();
                        postfix[pos++] = temp;
                    }
                    push(symbol);
                    break;
                default:
                    postfix[pos++] = symbol;
            }
            index++;
        }
        while (top != -1) {
            temp = pop();
            postfix[pos++] = temp;
        }
        postfix[pos] = '\0';
        cout<<"Postfix expression: "<<postfix<<"\n";
    }
};

// Postfix expression evaluation
class PostfixEval {
private:
    float stack[10];
    int top;
public:
    PostfixEval() { top = -1; }
    void push(float num) {
        stack[++top] = num;
    }
    float pop() {
        return stack[top--];
    }
    float evaluate() {
        cleardevice();
        char suffix[20];
        float value[20], result;
        int i = 0;
        cout<<"Enter postfix expression: ";
        cin>>suffix;
        while (suffix[i] != '\0') {
            if (isalpha(suffix[i])) {
                cout<<"Enter value for "<<suffix[i]<<": ";
                cin>>value[i];
                push(value[i]);
            } else {
                float op2 = pop();
                float op1 = pop();
                switch (suffix[i]) {
                    case '+': push(op1 + op2); break;
                    case '-': push(op1 - op2); break;
                    case '*': push(op1 * op2); break;
                    case '/': push(op1 / op2); break;
                    case '^': push(pow(op1, op2)); break;
                }
            }
            i++;
        }
        result = pop();
        return result;
    }
};

int functionB22(void) {

    cleardevice();
    int choice;
    ArrayOperations arrOp;
    StackArray stackArr;
    StackLinkedList stackLL;
    InfixToPostfix infixPost;
    PostfixEval postfixEval;

    while (1) {
        cleardevice();
        cout<<"\n--- MENU ---\n";
        cout<<"1. Array Operations\n";
        cout<<"2. Stack (Array)\n";
        cout<<"3. Stack (Linked List)\n";
        cout<<"4. Infix to Postfix\n";
        cout<<"5. Postfix Evaluation\n";
        cout<<"6. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch (choice) {
            case 1: {
                int subchoice;
                while (1) {
                    clrscr();
                    cleardevice();
                    cout<<"\n--- ARRAY OPERATIONS ---\n";
                    cout<<"1. Read Array\n";
                    cout<<"2. Display Array\n";
                    cout<<"3. Insert Element\n";
                    cout<<"4. Delete Element\n";
                    cout<<"5. Merge Arrays\n";
                    cout<<"6. Back to Main Menu\n";
                    cout<<"Enter choice: ";
                    cin>>subchoice;
                    
                    switch (subchoice) {
                        case 1: arrOp.readArray(); getch(); break;
                        case 2: arrOp.displayArray(); getch(); break;
                        case 3: arrOp.displayArray(); arrOp.insertElement(); arrOp.displayArray(); getch(); break;
                        case 4: arrOp.displayArray(); arrOp.deleteElement(); arrOp.displayArray(); getch(); break;
                        case 5: arrOp.mergeArrays(); getch(); break;
                        case 6: goto mainmenu;
                        default: cout<<"Invalid!\n"; getch(); break;
                    }
                }
                mainmenu: continue;
            }
            case 2: {
                int subchoice;
                while (1) {
                    cleardevice();
                    cout<<"\n--- STACK ARRAY ---\n";
                    cout<<"1. Push\n";
                    cout<<"2. Pop\n";
                    cout<<"3. Traverse/Display\n";
                    cout<<"4. Back\n";
                    cout<<"Enter choice: ";
                    cin>>subchoice;
                    
                    switch (subchoice) {
                        case 1: stackArr.push(); stackArr.traverse(); getch(); break;
                        case 2: stackArr.traverse(); stackArr.pop(); stackArr.traverse(); getch(); break;
                        case 3: stackArr.traverse(); getch(); break;
                        case 4: goto mainmenu2;
                        default: cout<<"Invalid!\n"; getch(); break;
                    }
                }
                mainmenu2: continue;
            }
            case 3: {
                int subchoice;
                while (1) {
                    cleardevice();
                    cout<<"\n--- STACK LINKED LIST ---\n";
                    cout<<"1. Push\n";
                    cout<<"2. Pop\n";
                    cout<<"3. Display\n";
                    cout<<"4. Back\n";
                    cout<<"Enter choice: ";
                    cin>>subchoice;
                    
                    switch (subchoice) {
                        case 1: stackLL.push(); stackLL.display(); getch(); break;
                        case 2: stackLL.display(); stackLL.pop(); stackLL.display(); getch(); break;
                        case 3: stackLL.display(); getch(); break;
                        case 4: goto mainmenu3;
                        default: cout<<"Invalid!\n"; getch(); break;
                    }
                }
                mainmenu3: continue;
            }
            case 4: {
                infixPost.convert();
                getch();
                break;
            }
            case 5: {
                cout<<"Result: "<<postfixEval.evaluate()<<endl;
                getch();
                break;
            }
            case 6: {
                cout<<"Exiting...\n";
                getch();
                return 0;
            }
            default:
                cout<<"Invalid choice!\n";
                getch();
        }
    }
    return 0;
}
