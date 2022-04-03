#include<iostream>
#include<fstream>
using namespace std;

	int main()
{
	fstream outFile;
	string outfilename="text_2.txt";
	
	outFile.open(outfilename,ios::out);

	if(outFile.is_open())
	{
		cout<<"File is open"<<endl;
		outFile<<"File is open";
	}
	else
	{
		cout<<"could not create a file"<<endl;
	}
}
