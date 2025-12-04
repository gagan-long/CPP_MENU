void function34()
{
     cleardevice();
     
     int arr[100], n, i;

     cout<<"Enter number of elements: ";
     cin>>n;
     for ( i = 0; i < n; i++)
     {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
     }

     cout<<"You entered: ";
     for ( i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     getch();
     
}