
//------------------ PUSH , POP, TRAVERSE in STACK program----------------------

#define MAXSIZE 10

class stack
{   
    int stack[MAXSIZE];
    int Top;
    public:
            void push();
            int pop();
	    void traverse();
            stack()
            {
                    Top= -1;
            }
};
void stack:: push()
{
        int item;
        if(Top==MAXSIZE - 1)
        {
                cout<<endl<<"The Stack is Full";
                getch();
                exit(0);
        }
        else
        {
                cout<<"Enter the element to be Insert:";
                cin>>item;
                Top=Top+1;
                stack[Top] = item;
        }
}
int stack:: pop()
{
        int item;
        if(Top==-1)
        {
                cout<<"The stack is empty";
                getch();
                exit(0);
        }
        else
        {
                item = stack[Top];
                Top = Top-1;
        }
        return(item);
}
void stack::traverse()
{
        int i;
        if(Top==-1)
        {
                cout<<"The stack is empty";
                getch();
                exit(0);
        }
        else
        {
                cout<<"Traverse the element ";
                for(i=Top; i>=0;i--)
                {
                        cout<<endl<<stack[i];
                }
        }
}
void functionB11()
{
         cleardevice();
         cout<<"-------- PUSH , POP, TRAVERSE in STACK program--------"<<endl;
         int choice;
         char ch;
         stack s;
         do
         {
                cout<<"1.PUSH "<<endl;
                cout<<"2. POP "<<endl;
                cout<<"3. TRAVERSE "<<endl;
                cout<<"Enter your choice "<<endl;
                cin>>choice;
                switch(choice)
                {
                        case 1: s.push();
                            break;
                        case 2: cout<<endl<<"The deleted element is "<<s.pop();
                            break;
                        case 3: s.traverse();
                            break;
                        default: cout<<endl<<"You Enter wrong choice";
                }
                        cout<<endl<<"Do You Wish to Continue (Y/N)";
                        fflush(stdin);
                        cin>>ch;
                
         }
         while(ch == 'Y' || ch == 'y');
    
}