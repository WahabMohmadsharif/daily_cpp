#include<iostream>

using namespace std;

int main()
{
	int x=10;
	int &r=x;

	cout<<"x -"<<x<<"r-"<<r<<endl;
	cout<<"&x-"<<&x<<"r-"<<&r<<endl;
	r=20;
	cout<<"x-"<<x<<"r-"<<r<<endl;
	cout<<"&x -"<< (int *) &x<<"&r-"<<(int *)&r<<endl;
	cout<<"This example indicates that no separate memory is allocated for the reference variable"<<endl;
	cout<<"By updating the value of reference variable we are updating the value of original variable for which reference was created"<<endl;

}
