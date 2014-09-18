//Eric Lemieux, 2014

class A
{
public:
	A()
	{

	}
};

class B:public A
{
public:
	B()
	{

	}
};

int main()
{
	/*
	A* a = new B;	//Works properly
	B* b = new A;	//Error, cant do this
	*/

	/*
	//Builds but crashes
	char *str = "Foo";
	*str = 'b';
	*/
	
	//c goes out of scope and p is then pointing into memory
	char *p = 0;
	{
		char c;
		p = &c;
	}

	return 0;
}