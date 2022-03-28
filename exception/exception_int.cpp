#include<iostream>
using namespace std;

void might_go_wrong()
{
	bool a=true;
	if(a)
	{
		throw 8;
	}
}

int main()
{
	try
	{
		might_go_wrong();
	}

	catch(int &e)
	{
		cout<<"caught the exception!!"<<e<<endl;
	}

}
