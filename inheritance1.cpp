#include <iostream>
#include <string>
using namespace std;
class a{
    public:
    string b;
};
class c: public a{
    public:
    string i;
};
class f: public c{
    public:
    int d;
};
int main()
{
    f e;
    cout<<"enter your fullname\n";
    cin>>e.b>>e.i;
    cout<<"enter your age\n";
    cin>>e.d;
    cout<<"your name : "<<e.b<<" "<<e.i<<endl;
    cout<<"your age : "<<e.d<<endl;
}

