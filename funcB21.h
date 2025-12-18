// hashing methods
// division method



#define MAX 100

int DivisionHash(int keyval){

    int res;
    res =  keyval % MAX;
   return res ;
}

int MultiplicationHash(int keyval){

    // float A = 0.618033; // (sqrt(5)-1)/2
    float A = 0.357840; 
    float frac;
    int res;

    frac = keyval * A - int(keyval * A);
    res = int(MAX * frac);
    return res ;
}

int midSquareHash(int keyval){

    int square = keyval * keyval;
    int res;
    // extracting middle digits
    res = (square / 10) % 100; // assuming we want 2 middle digits
    return res;
}

int foldingMethod(int keyval){

    int sum = 0;
    while (keyval > 0) {
        sum += keyval % 100; // taking 2 digits at a time
        keyval /= 100;
    }
    return sum % MAX;
}

void functionB21()
{
        cleardevice();
        int n,hindex, choice;
       

        cout<<" Enter your choice 1.Division 2.Multiplication 3.MidSquare 4.Folding";
        cin>>choice;

         cout<<"\n Enter any key value";
        cin>>n;
    while ((choice >=1) && (choice <=4)) {
        switch (choice) {
        case 1:
            hindex = DivisionHash(n);
            cout<<"Hash Table Index (Division Method): "<<hindex<<endl;
            break;
        case 2:
            hindex = MultiplicationHash(n);
            cout<<"Hash Table Index (Multiplication Method): "<<hindex<<endl;
            break;
        case 3:
            hindex = midSquareHash(n);
            cout<<"Hash Table Index (Mid-Square Method): "<<hindex<<endl;
            break;
        case 4:
            hindex = foldingMethod(n);
            cout<<"Hash Table Index (Folding Method): "<<hindex<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }

        cout<<"\n Enter your choice 1.Division 2.Multiplication 3.MidSquare 4.Folding (0 to exit)";
        cin>>choice;

        if(choice == 0)
            break;

        cout<<"\n Enter any key value";
        cin>>n;
    }
    

        getch();


}

//  hash functions