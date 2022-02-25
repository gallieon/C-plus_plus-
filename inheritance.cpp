#include <iostream>
#include <string>
using namespace std;
class apple{
    public:
    string bottle;
};
class car : public apple{
    public:
    int c;
};
int main()
{
    car tonny;
    cout<<"here is your name\n";
    cin>>tonny.bottle;
    cout<<"your age\n";
    cin>>tonny.c;
    cout<<"your name is."<<tonny.bottle<<endl;
    cout<<"your age."<<tonny.c<<endl;
    
}

