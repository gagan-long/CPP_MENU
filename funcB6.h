// Binary Search in C++
void functionB6()

{
	 cleardevice();
    cout<<"-------------binary search  -----------------"<<endl;
	int BEG, END,MID, *DATA, i, ITEM, LOC, SIZE;
	//read the size of array
	cout<<"Enter the no. of element ";
	cin>>SIZE;
	//dynamic memeory allocation
	DATA=new int[SIZE];
	//read array element
	for(i=0; i<SIZE;i++)
	{
		cout<<"Enter :: "<<i+1<<"  Element:";
		cin>>DATA[i];
	}
	//Enter element to be searched
	cout<<"Enter Searching Element:";
	cin>>ITEM;
	//set BEG END & MID
	BEG=0;
	END=SIZE-1;
	MID=(BEG+END)/2;
	while(BEG<=END && DATA[MID]!=ITEM)
	{
		if(ITEM< DATA[MID])
			END=MID-1;
		else
			BEG=MID+1;
		MID=(BEG+END)/2;
	}
	if (DATA [MID]==ITEM)
	{
		LOC=MID;
		cout<<"Element found at location"<<LOC;
	}
	else
	{
		LOC=NULL;
		cout<<"Element not found";
	}
	getch();
}
