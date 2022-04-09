#include<iostream>
#include<fstream>

using namespace std;

	int main()
{
	ifstream infile;

	infile.open("text.txt");

	if(infile.is_open())
	{
		string line;
		//Following code will only get the one word
		//infile>>line;
		//Following code will get the first line of file for reading
		//getline(infile,line);
		while(!infile.eof())//if file reaches eof 1 will return
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		
		cout<<line<<endl;
	infile.close();
	}
	else
	{
		cout<<"Can not open file"<<endl;
	}


}
