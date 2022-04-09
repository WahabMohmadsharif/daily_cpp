#include<iostream>
#include<fstream>
using namespace std;
//with this example we can understnad about parsing the information from file
//with getline function we can read line by line where every line ends with the new line character
//however if you want to capture the particular pat of tring based on the token you can apply third argument with the necessary token
int main()
{
	ifstream fd;
	fd.open("mytextfile.txt");
	if(fd.is_open())
	{
	cout<<"File is open"<<endl;
	string line;
	while(fd)
	{
		getline(fd,line,':');
		int population;
		fd>>population;//to capture the information after particular token
		fd>>ws;//to flush the extra new line character
		if(!fd)
		break;//to avoid printing extra line which will be indicated when fd becomes 1
		cout<<line<<"="<<population<<endl;

	}
	}
	else
	{
		cout<<"File is not opening"<<endl;
		return -1;
	}


}
