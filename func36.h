class DMA
{
    private:
            int *p,size;
    public:
            DMA(){size=0; p=NULL;}
            DMA(int s)
            {
                    size=s;
                    p=new int [size];
            }
            void get();
            void display();

};
void DMA :: get()
{
        cout<<"Enter"<<size<<"Number of element:";
        for(int i=0; i<size; i++)
        cin>>p[i];
}
void DMA :: display()
{
        for(int i=0; i<size;i++)
        cout<<"size:"<<p[i]<<endl;
}
void function36()
{
         cleardevice();
         int size;
         cout<<"---------------------DMA--------------------------"<<endl;
         cout<<"Enter the size of array:";
                cin>>size;
        DMA s(size);
        s.get();
        s.display();
        getch();
}