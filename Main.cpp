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

	return 0;
}