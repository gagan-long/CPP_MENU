class Menu
{
    int a[10],i;
    int array1[100],array2[100],array3[200];
    public:
        void insert();
        void del();
        void traversa();
        void merged();
        Menu()
        {
            i = -1;
        }
}

void main()
{
    cleardevice();
    int n;
    Menu mn;
    do
    {
        cout<<"********************************  YOUR CHOICES ARE  ***********************";
        COUT<<"  1. insert "<<endl;
        COUT<<"  2. Delete "<<endl;
        COUT<<"  3. Traverse "<<endl;
        COUT<<"  4. Merged "<<endl;
        COUT<<"  5. Exit "<<endl;

        cout<<" NOW ENTER YOUR CHOICE:"<<endl;
        cin>>n;

        switch(n)
        {
            case 1:
                mn.insert();
                break;

            case 2:
                mn.del();
                break;
            
            case 3:
                mn.traversa();
                break;

            case 4:
                mn.merged();
                break;
            case 5:
                break;

            default:
                cout<<"Sorry choice is invalid!!";


        }

    } while (!=5);
    getch();

}

void Menu :: insert()
{
        if (i<=8)
        {
            cout<<"Enter the No. (10 elements)"<<endl;
            while(i<=8)
            {
                i++;
                cin >> a[i];
            }
        }
        else{
            cout << "The Array is Full";
        }
}

void Menu :: del()
{
    int item,j,flag = 0,pos;
    cout << "Enter the no to delete :"
    cin >> item;

    for(j=0;j<=i-1;j++)
    {
        if(a[j]==item){
            flag = 1;
            pos = j;
        }
    }
    if(flag)
    {
        for(j = pos;j<=i-1;j++)
        {
            a[j]=a[j+1];
        }
        i--;
    }
    else{
        cout << "The no is not in list, Sorry"<<endl;
    }
}