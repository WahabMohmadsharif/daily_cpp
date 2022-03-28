#include<iostream>
#include<string>
using namespace std;

void might_go_wrong()
{
	bool a=true;
	if(a)
	{
		throw string("you have exception sir!!");
	}
}

int main()
{
	try
	{
		might_go_wrong();
	}

	    catch (string &e) {
    
        cout << "Error message :" << e << endl;
    }

}
