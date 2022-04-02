#include<iostream>
#include<exception>

using namespace std;

class MyException:public exception
{
	public:
		virtual const char* what() const throw()
		{
			return "something happend";
		}
};

class Test
{
	public:
		void goeswrong()
		{
			throw MyException();
		}
};

int main()
{
 Test test;

 	try {

		test.goeswrong();
	}
	catch(MyException &e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}
