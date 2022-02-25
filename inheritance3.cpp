#include <iostream>
using namespace std;


// first base class
class base1
{
    public:
    base1()
    {
        cout<<"this is the base class...";
    }
};


//second base class

class base2
{
    public:
    base2()
    {
        cout<<"this is the second base class....";
    }
};

// the derived class for the both two base class

class derived: public base1,public base2
{
    
};

// here we can write main function

int main()
{
    derived m_l;
    return 0;
}





