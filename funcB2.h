
// Array operations
class ArrayOperations {
private:
    int arr[100], len;
public:
    void readArray() {
        printf("Enter the number of elements: ");
        scanf("%d", &len);
        printf("Enter the elements: ");
        for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
    }
    void displayArray() {
        printf("Array elements: ");
        for (int i = 0; i < len; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    void insertElement() {
        int pos, num;
        printf("Enter the element to insert: ");
        scanf("%d", &num);
        printf("Enter the position (0-based): ");
        scanf("%d", &pos);
        if (pos < 0 || pos > len) {
            printf("Invalid position!\n");
            return;
        }
        for (int i = len; i > pos; i--) arr[i] = arr[i-1];
        arr[pos] = num;
        len++;
        printf("Element inserted.\n");
    }
    void deleteElement() {
        int pos;
        printf("Enter the position to delete (0-based): ");
        scanf("%d", &pos);
        if (pos < 0 || pos >= len) {
            printf("Invalid position!\n");
            return;
        }
        for (int i = pos; i < len-1; i++) arr[i] = arr[i+1];
        len--;
        printf("Element deleted.\n");
    }
    void mergeArrays() {
        int arr1[100], arr2[100], arr3[200];
        int p, q, c = 0, m = 0, n = 0;
        printf("Enter number of elements in first array: ");
        scanf("%d", &p);
        printf("Enter elements of first array: ");
        for (m = 0; m < p; m++) scanf("%d", &arr1[m]);
        printf("Enter number of elements in second array: ");
        scanf("%d", &q);
        printf("Enter elements of second array: ");
        for (n = 0; n < q; n++) scanf("%d", &arr2[n]);
        while (m < p && n < q) {
            if (arr1[m] < arr2[n]) arr3[c++] = arr1[m++];
            else arr3[c++] = arr2[n++];
        }
        while (m < p) arr3[c++] = arr1[m++];
        while (n < q) arr3[c++] = arr2[n++];
        printf("Merged array: ");
        for (int i = 0; i < c; i++) printf("%d ", arr3[i]);
        printf("\n");
    }
};

// Stack operations using array
class StackArray {
private:
    int stack[10], top;
public:
    StackArray() { top = -1; }
    void push() {
        int item;
        if (top == 9) {
            printf("Stack is full!\n");
            return;
        }
        printf("Enter element to push: ");
        scanf("%d", &item);
        stack[++top] = item;
        printf("Element pushed.\n");
    }
    void pop() {
        if (top == -1) {
            printf("Stack is empty!\n");
            return;
        }
        printf("Popped element: %d\n", stack[top--]);
    }
    void traverse() {
        if (top == -1) {
            printf("Stack is empty!\n");
            return;
        }
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) printf("%d ", stack[i]);
        printf("\n");
    }
};

// Stack operations using linked list
struct Node {
    int data;
    struct Node* next;
};

class StackLinkedList {
private:
    struct Node* top;
public:
    StackLinkedList() { top = NULL; }
    void push() {
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter element to push: ");
        scanf("%d", &node->data);
        node->next = top;
        top = node;
        printf("Element pushed.\n");
    }
    void pop() {
        if (top == NULL) {
            printf("Stack is empty!\n");
            return;
        }
        struct Node* temp = top;
        printf("Popped element: %d\n", temp->data);
        top = top->next;
        free(temp);
    }
    void display() {
        if (top == NULL) {
            printf("Stack is empty!\n");
            return;
        }
        struct Node* temp = top;
        printf("Stack elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
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
        if (top == 49) {
            printf("Stack overflow!\n");
            return;
        }
        stack[++top] = c;
    }
    char pop() {
        if (top == -1) {
            printf("Stack empty!\n");
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
        char infix[25], postfix[40];
        int index = 0, pos = 0;
        char symbol, temp;
        printf("Enter infix expression: ");
        scanf("%s", infix);
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
        printf("Postfix expression: %s\n", postfix);
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
        char suffix[20];
        float value[20], result;
        int i = 0;
        printf("Enter postfix expression: ");
        scanf("%s", suffix);
        while (suffix[i] != '\0') {
            if (isalpha(suffix[i])) {
                printf("Enter value for %c: ", suffix[i]);
                scanf("%f", &value[i]);
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

int functionB2() {

    cleardevice();
    int choice;
    ArrayOperations arrOp;
    StackArray stackArr;
    StackLinkedList stackLL;
    InfixToPostfix infixPost;
    PostfixEval postfixEval;

    while (1) {
        clrscr();
        printf("\n--- MENU ---\n");
        printf("1. Array Operations\n");
        printf("2. Stack (Array)\n");
        printf("3. Stack (Linked List)\n");
        printf("4. Infix to Postfix\n");
        printf("5. Postfix Evaluation\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int subchoice;
                while (1) {
                    clrscr();
                    printf("\n--- ARRAY OPERATIONS ---\n");
                    printf("1. Read Array\n");
                    printf("2. Display Array\n");
                    printf("3. Insert Element\n");
                    printf("4. Delete Element\n");
                    printf("5. Merge Arrays\n");
                    printf("6. Back to Main Menu\n");
                    printf("Enter choice: ");
                    scanf("%d", &subchoice);
                    
                    switch (subchoice) {
                        case 1: arrOp.readArray(); getch(); break;
                        case 2: arrOp.displayArray(); getch(); break;
                        case 3: arrOp.displayArray(); arrOp.insertElement(); arrOp.displayArray(); getch(); break;
                        case 4: arrOp.displayArray(); arrOp.deleteElement(); arrOp.displayArray(); getch(); break;
                        case 5: arrOp.mergeArrays(); getch(); break;
                        case 6: goto mainmenu;
                        default: printf("Invalid!\n"); getch(); break;
                    }
                }
                mainmenu: continue;
            }
            case 2: {
                int subchoice;
                while (1) {
                    clrscr();
                    printf("\n--- STACK ARRAY ---\n");
                    printf("1. Push\n");
                    printf("2. Pop\n");
                    printf("3. Traverse/Display\n");
                    printf("4. Back\n");
                    printf("Enter choice: ");
                    scanf("%d", &subchoice);
                    
                    switch (subchoice) {
                        case 1: stackArr.push(); stackArr.traverse(); getch(); break;
                        case 2: stackArr.traverse(); stackArr.pop(); stackArr.traverse(); getch(); break;
                        case 3: stackArr.traverse(); getch(); break;
                        case 4: goto mainmenu2;
                        default: printf("Invalid!\n"); getch(); break;
                    }
                }
                mainmenu2: continue;
            }
            case 3: {
                int subchoice;
                while (1) {
                    clrscr();
                    printf("\n--- STACK LINKED LIST ---\n");
                    printf("1. Push\n");
                    printf("2. Pop\n");
                    printf("3. Display\n");
                    printf("4. Back\n");
                    printf("Enter choice: ");
                    scanf("%d", &subchoice);
                    
                    switch (subchoice) {
                        case 1: stackLL.push(); stackLL.display(); getch(); break;
                        case 2: stackLL.display(); stackLL.pop(); stackLL.display(); getch(); break;
                        case 3: stackLL.display(); getch(); break;
                        case 4: goto mainmenu3;
                        default: printf("Invalid!\n"); getch(); break;
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
                printf("Result: %.2f\n", postfixEval.evaluate());
                getch();
                break;
            }
            case 6: {
                printf("Exiting...\n");
                getch();
                return 0;
            }
            default:
                printf("Invalid choice!\n");
                getch();
        }
    }
    return 0;
}
