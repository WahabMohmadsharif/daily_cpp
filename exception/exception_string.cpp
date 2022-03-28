#include<iostream>
using namespace std;

void might_go_wrong()
{
	bool a=true;
	if(a)
	{
		throw "you have exception sir!!";
	}
}

int main()
{
	try
	{
		might_go_wrong();
	}

	    catch (char const * e) {
    
        cout << "Error message :" << e << endl;
    }

}
