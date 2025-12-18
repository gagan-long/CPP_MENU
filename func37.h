// //-------------Addtion of 2 Complex number---------------


//addition of 2 complex number

class complex
{
	private:
		float real,img;
	public:
		void getcomplex(float ri, float ii)
		{
			real = ri;
			img = ii;
		}
	void addcomplex(complex c1, complex c2);
	void display()
	{
		cout<<"Real+img="<<real<<endl<<"+i"<<img<<endl;
	}
};
void complex::addcomplex(complex c1, complex c2)
{
	real = c1.real+c2.real;
	img = c1.img+c2.img;
}
void function37()
{
    //   data declaration
         cleardevice(); //clearscrean
		 float r1,i1,r2,i2;
         cout<<"-------------------------Addition of 2 Complex Number------------------"<<endl;
	complex c1,c2,c3;
	cout<<"Enter first complex number(real and imaginary part):"<<endl;
	cin>>r1>>i1;
	c1.getcomplex(r1,i1);
	cout<<"Enter second complex number(real and imaginary part):"<<endl;
	cin>>r2>>i2;
	c2.getcomplex(r2,i2);
	c3.addcomplex(c1,c2);
	// c1.display();
	// c2.display();
	c3.display();
	getch();
}