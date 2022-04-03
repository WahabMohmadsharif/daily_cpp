#include<iostream>
#include<fstream>
using namespace std;

	int main()
{
	ofstream outFile;

	outFile.open("text.txt");

	if(outFile.is_open())
	{
		cout<<"file is open"<<endl;
		outFile<<"Hello there"<<endl;
	}
	else
	{
		cout<<"File is not open"<<endl;
	}

}
