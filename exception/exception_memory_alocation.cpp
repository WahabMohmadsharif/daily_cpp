#include<iostream>
#include<string>
using namespace std;
class might_go_wrong{
public:
     might_go_wrong()
{
    char *p=new char[99999999999999999];
    delete[]p;
}

};
int main()
{
    try{
    might_go_wrong obj;
    }
    catch(bad_alloc &e)
    {
        cout<<e.what()<<endl;
    }
}
