#include<iostream>
#include<exception>
using namespace std;

void goeswrong()
{
	bool error1=true;
	bool error2=false;

	if(error1)
	{
		throw bad_alloc();
	}

	if(error2)
	{
		throw exception();
	}
}

int main()
{
	try{
		goeswrong();
	}
	//here if base class exception is put to catch before the sub-class exception then base class catch can catch the exception of subclass exception tooo!!!
	//here its to be remember that always put subclass exception before the base class exception for catching.
	catch(bad_alloc &e)
	{
		cout<<"bad alloc exception"<<e.what()<<endl;
	}
	catch(exception &e)
	{
		cout<<"exception class"<<e.what()<<endl;
	}
}
